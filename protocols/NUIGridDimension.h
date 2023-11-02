
@protocol NUIGridDimension <NSObject>

@required

- (long long)alignment;
- (NSArray *)arrangedSubviews;
- (bool)isHidden;
- (double)length;
- (void)setAlignment:(long long)arg1;
- (void)setArrangedSubviews:(NSArray *)arg1;
- (void)setHidden:(bool)arg1;
- (void)setLength:(double)arg1;
- (void)setSpacingAfter:(double)arg1;
- (double)spacingAfter;

@end
