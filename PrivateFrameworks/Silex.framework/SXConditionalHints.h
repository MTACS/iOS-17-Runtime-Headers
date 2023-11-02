
@interface SXConditionalHints : SXJSONObject <SXConditionalHints>

@property (nonatomic, readonly) long long autoplacement;
@property (nonatomic, readonly) long long componentLayouts;
@property (nonatomic, readonly) long long componentStyles;
@property (nonatomic, readonly) long long componentTextStyles;
@property (nonatomic, readonly) long long components;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long documentStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long textStyles;

- (long long)autoplacementWithValue:(id)arg1 withType:(int)arg2;
- (long long)componentLayoutsWithValue:(id)arg1 withType:(int)arg2;
- (long long)componentStylesWithValue:(id)arg1 withType:(int)arg2;
- (long long)componentTextStylesWithValue:(id)arg1 withType:(int)arg2;
- (long long)componentsWithValue:(id)arg1 withType:(int)arg2;
- (long long)documentStyleWithValue:(id)arg1 withType:(int)arg2;
- (long long)ternaryValueForJSONValue:(id)arg1 type:(int)arg2;
- (long long)textStylesWithValue:(id)arg1 withType:(int)arg2;

@end
