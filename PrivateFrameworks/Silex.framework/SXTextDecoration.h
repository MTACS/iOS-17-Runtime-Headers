
@interface SXTextDecoration : SXJSONObject

@property (nonatomic, readonly) UIColor *color;
@property (nonatomic, readonly) int style;
@property (nonatomic, readonly) long long width;

- (int)styleWithValue:(id)arg1 withType:(int)arg2;

@end
