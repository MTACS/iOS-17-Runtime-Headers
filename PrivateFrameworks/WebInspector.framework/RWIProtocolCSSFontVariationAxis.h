
@interface RWIProtocolCSSFontVariationAxis : RWIProtocolJSONObject

@property (nonatomic) double defaultValue;
@property (nonatomic) double maximumValue;
@property (nonatomic) double minimumValue;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *tag;

// Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector

- (double)defaultValue;
- (id)initWithTag:(id)arg1 minimumValue:(double)arg2 maximumValue:(double)arg3 defaultValue:(double)arg4;
- (double)maximumValue;
- (double)minimumValue;
- (id)name;
- (void)setDefaultValue:(double)arg1;
- (void)setMaximumValue:(double)arg1;
- (void)setMinimumValue:(double)arg1;
- (void)setName:(id)arg1;
- (void)setTag:(id)arg1;
- (id)tag;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

+ (id)safe_initWithTag:(id)arg1 minimumValue:(double)arg2 maximumValue:(double)arg3 defaultValue:(double)arg4;

@end
