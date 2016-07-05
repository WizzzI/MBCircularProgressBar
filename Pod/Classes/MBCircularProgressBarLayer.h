//
//  MBCircularProgressBarLayer.h
//  MBCircularProgressBar
//
//  Created by Mati Bot on 7/9/15.
//  Copyright (c) 2015 Mati Bot All rights reserved.
//

@import QuartzCore;

@protocol MBCircularProgressBarDelegate <NSObject>

@end

/**
 * The MBCircularProgressBarLayer class is a CALayer subclass that represents the underlying layer
 * of MBCircularProgressBarView.
 */
@interface MBCircularProgressBarLayer : CALayer

@property (nonatomic, weak) <MBCircularProgressBarDelegate> delegate;

/**
 * Set a partial angle for the progress bar	[0,100]
 */
@property (nonatomic) CGFloat  progressAngle;

/**
 * Progress bar rotation (Clockewise)	[0,100]
 */
@property (nonatomic) CGFloat  progressRotationAngle;

/**
 * The value of the progress bar
 */
@property (nonatomic) CGFloat  value;

/**
 * The maximum possible value, used to calculate the progress (value/maxValue)	[0,∞)
 */
@property (nonatomic) CGFloat  maxValue;

/**
 * Animation duration in seconds
 */
@property (nonatomic) NSTimeInterval  animationDuration;

/**
 * Defines if the progress should animate on value change
 */
@property (nonatomic) BOOL  animated;

/**
 * The font size of the value text	[0,∞)
 */
@property (nonatomic) CGFloat  valueFontSize;

/**
 * The name of the font of the unit string
 */
@property (nonatomic) CGFloat  unitFontSize;

/**
 * The string that represents the units, usually %
 */
@property (nonatomic)   NSString *unitString;

/**
 * The color of the value and unit text
 */
@property (nonatomic) UIColor  *fontColor;

/**
 * The width of the progress bar (user space units)	[0,∞)
 */
@property (nonatomic) CGFloat    progressLineWidth;

/**
 * The color of the progress bar
 */
@property (nonatomic) UIColor    *progressColor;

/**
 * The shape of the progress bar cap	{kCGLineCapButt=0, kCGLineCapRound=1, kCGLineCapSquare=2}
 */
@property (nonatomic) CGLineCap  progressCapType;

/**
 * The width of the background bar (user space units)	[0,∞)
 */
@property (nonatomic) CGFloat    emptyLineWidth;

/**
 * The shape of the background bar cap	{kCGLineCapButt=0, kCGLineCapRound=1, kCGLineCapSquare=2}
 */
@property (nonatomic) CGLineCap  emptyCapType;

/**
 * The color of the background bar
 */
@property (nonatomic) UIColor    *emptyLineColor;

/*
 * Number of decimal places of the value [0,∞)
 */
@property (nonatomic)  NSInteger decimalPlaces;

/**
 * The value to be displayed in the center
 */
@property (nonatomic)  CGFloat   valueDecimalFontSize;

/**
 * The font size of the unit text	[0,∞)
 */
@property (nonatomic)    NSString  *unitFontName;

/**
 * The name of the font of the unit string
 */
@property (nonatomic)    NSString  *valueFontName;

/**
 * Should show unit screen
 */
@property (nonatomic)  BOOL      showUnitString;

/**
 * The offset to apply to the unit / value text
 */
@property (nonatomic)  CGPoint   textOffset;

/**
 * Should show value string
 */
@property (nonatomic)  BOOL      showValueString;

@property (nonatomic) CGSize shadowOffset;

@property (nonatomic) UIColor *shadowColor;

@property (nonatomic) CGFloat shadowRadius;

/**
 * Show label value as countdown
 * Default is NO
 */
@property (nonatomic)  BOOL      countdown;

@end
