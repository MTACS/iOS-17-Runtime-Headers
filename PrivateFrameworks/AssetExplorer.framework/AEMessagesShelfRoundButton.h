
@interface AEMessagesShelfRoundButton : UIButton <PXReusableObject>

+ (id)_imageForStyle:(long long)arg1;
+ (struct CGSize { double x1; double x2; })intrinsicContentSizeForStyle:(long long)arg1;
+ (struct CGSize { double x1; double x2; })preferredTapRegionSizeForStyle:(long long)arg1;
+ (id)roundButtonWithStyle:(long long)arg1;

- (void)_commonAEMessagesRoundButtonInitializationWithStyle:(long long)arg1;
- (void)becomeReusable;
- (void)prepareForReuse;

@end
