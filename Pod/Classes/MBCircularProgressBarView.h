//
//  MBCircularProgressBarView.h
//  MBCircularProgressBar
//
//  Created by Mati Bot on 7/2/15.
//  Copyright (c) 2015 Mati Bot All rights reserved.
//

#import <UIKit/UIKit.h>;

IB_DESIGNABLE
/**
 * The MBCircularProgressBarView class is a UIView subclass that draws a circular progress bar with configurable attributes.
 * You can change the attributes within the Interface Builder using IBDesignables (https://developer.apple.com/library/ios/recipes/xcode_help-IB_objects_media/Chapters/CreatingaLiveViewofaCustomObject.html )
 */
@interface MBCircularProgressBarView : UIView

/**
 * Should show value string
 */
@property (nonatomic) IBInspectable BOOL      showValueString;

/**
 * The value of the progress bar
 */
@property (nonatomic) IBInspectable CGFloat   value;

/**
 * The maximum possible value, used to calculate the progress (value/maxValue)	[0,∞)
 */
@property (nonatomic) IBInspectable CGFloat   maxValue;

/*
 * Number of decimal places of the value [0,∞)
 */
@property (nonatomic) IBInspectable NSInteger decimalPlaces;

/**
 * The name of the font of the value string
 */
@property (nonatomic)   IBInspectable NSString  *valueFontName;

/**
 * The font size of the value text	[0,∞)
 */
@property (nonatomic) IBInspectable CGFloat   valueFontSize;

/**
 * The value to be displayed in the center
 */
@property (nonatomic) IBInspectable CGFloat   valueDecimalFontSize;

/**
 * Should show unit screen
 */
@property (nonatomic) IBInspectable BOOL      showUnitString;

/**
 * The name of the font of the unit string
 */
@property (nonatomic)   IBInspectable NSString  *unitFontName;

/**
 * The font size of the unit text	[0,∞)
 */
@property (nonatomic) IBInspectable CGFloat   unitFontSize;

/**
 * The string that represents the units, usually %
 */
@property (nonatomic)   IBInspectable NSString  *unitString;

/**
 * The color of the value and unit text
 */
@property (nonatomic) IBInspectable UIColor   *fontColor;

/**
 * Progress bar rotation (Clockewise)	[0,100]
 */
@property (nonatomic) IBInspectable CGFloat   progressRotationAngle;

/**
 * Set a partial angle for the progress bar	[0,100]
 */
@property (nonatomic) IBInspectable CGFloat   progressAngle;

/**
 * The width of the progress bar (user space units)	[0,∞)
 */
@property (nonatomic) IBInspectable CGFloat   progressLineWidth;

/**
 * The color of the progress bar
 */
@property (nonatomic) IBInspectable UIColor   *progressColor;

/**
 * The shape of the progress bar cap	{kCGLineCapButt=0, kCGLineCapRound=1, kCGLineCapSquare=2}
 */
@property (nonatomic) IBInspectable NSInteger progressCapType;

/**
 * The width of the background bar (user space units)	[0,∞)
 */
@property (nonatomic) IBInspectable CGFloat   emptyLineWidth;

/**
 * The color of the background bar
 */
@property (nonatomic) IBInspectable UIColor   *emptyLineColor;

/**
 * The shape of the background bar cap	{kCGLineCapButt=0, kCGLineCapRound=1, kCGLineCapSquare=2}
 */
@property (nonatomic) IBInspectable NSInteger emptyCapType;

/**
 * The offset to apply to the unit / value text
 */
@property (nonatomic) IBInspectable CGPoint textOffset;


/**
 * The bool value to apply to if its counddown or not
 */
@property (nonatomic) IBInspectable BOOL      countdown;

/**
 * Default CGSizeMake(0, 0)
 */
@property (nonatomic) IBInspectable CGSize shadowOffset;

/**
 * Default clearColor
 */
@property (nonatomic) IBInspectable UIColor *shadowColor;

/**
 * Default 0
 */
@property (nonatomic) IBInspectable CGFloat shadowRadius;


/**
 * Set the value of the progress bar with animation
 * @param value the new value
 * @param duration animation duration in seconds
 */
-(void)setValue:(CGFloat)value animateWithDuration:(NSTimeInterval)duration;

@end
