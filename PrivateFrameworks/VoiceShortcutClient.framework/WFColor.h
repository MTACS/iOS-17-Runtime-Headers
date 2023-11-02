
@interface WFColor : NSObject <NSCopying, NSSecureCoding> {
    struct CGColor { } * _CGColor;
    NSColor * _NSColor;
    NSBundle * _bundle;
    NSString * _colorName;
    UIColor * _platformColor;
    unsigned long long  _representationType;
    unsigned long long  _systemColor;
}

@property (nonatomic, readonly) struct CGColor { }*CGColor;
@property (nonatomic, readonly) NSColor *NSColor;
@property (nonatomic, readonly) unsigned int RGBAValue;
@property (nonatomic, readonly) UIColor *UIColor;
@property (nonatomic, readonly) double alpha;
@property (nonatomic, readonly) double blue;
@property (nonatomic, readonly) NSBundle *bundle;
@property (nonatomic, readonly) NSString *colorName;
@property (nonatomic, readonly) WFGradient *gradient;
@property (nonatomic, readonly) double green;
@property (nonatomic, readonly) bool hasPaletteGradient;
@property (nonatomic, readonly) NSString *hexValue;
@property (nonatomic, readonly) WFGradient *paletteGradient;
@property (nonatomic, readonly) UIColor *platformColor;
@property (nonatomic, readonly) double red;
@property (nonatomic, readonly) unsigned long long representationType;
@property (nonatomic, readonly) unsigned long long systemColor;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient

+ (id)blackColor;
+ (id)clearColor;
+ (id)colorNamed:(id)arg1 inBundle:(id)arg2;
+ (id)colorWithCGColor:(struct CGColor { }*)arg1;
+ (id)colorWithDisplayP3Red:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithFocusColorName:(id)arg1;
+ (id)colorWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
+ (id)colorWithP3RGBAValue:(unsigned int)arg1;
+ (id)colorWithPaletteColor:(unsigned long long)arg1;
+ (id)colorWithRGBAValue:(unsigned int)arg1;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithSystemColor:(unsigned long long)arg1;
+ (id)colorWithWhite:(double)arg1 alpha:(double)arg2;
+ (bool)supportsSecureCoding;
+ (id)whiteColor;
+ (id)workflowGradientPalette;
+ (id)workflowPalette;
+ (id)workflowPaletteNames;

- (void).cxx_destruct;
- (struct CGColor { }*)CGColor;
- (id)NSColor;
- (unsigned int)RGBAValue;
- (id)UIColor;
- (double)alpha;
- (double)blue;
- (id)bundle;
- (id)colorName;
- (id)colorWithAlphaComponent:(double)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)getHue:(double*)arg1 saturation:(double*)arg2 value:(double*)arg3 alpha:(double*)arg4;
- (bool)getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3 alpha:(double*)arg4;
- (id)gradient;
- (double)green;
- (bool)hasPaletteGradient;
- (unsigned long long)hash;
- (id)hexValue;
- (id)init;
- (id)initWithCGColor:(struct CGColor { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithColorName:(id)arg1 inBundle:(id)arg2;
- (id)initWithDisplayP3Red:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)initWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
- (id)initWithPlatformColor:(id)arg1;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)initWithSerializedRepresentation:(id)arg1;
- (id)initWithSystemColor:(unsigned long long)arg1;
- (id)initWithWhite:(double)arg1 alpha:(double)arg2;
- (bool)isCloseToColor:(id)arg1;
- (bool)isDark;
- (bool)isEqual:(id)arg1;
- (id)paletteGradient;
- (id)paletteGradientFallingBackToDefaultGradient:(bool)arg1;
- (id)platformColor;
- (double)red;
- (unsigned long long)representationType;
- (id)serializedRepresentation;
- (unsigned long long)systemColor;

// Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit

+ (id)colorWithRemindersColor:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (id)batteryOutlineColor;

// Image: /System/Library/PrivateFrameworks/WorkflowUIServices.framework/WorkflowUIServices

- (bool)wf_isVeryDark;
- (bool)wf_isVeryLight;

@end
