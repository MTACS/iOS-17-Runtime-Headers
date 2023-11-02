
@protocol WBSIconResponse <NSObject>

@required

- (UIImage *)icon;

@optional

- (UIColor *)extractedBackgroundColor;
- (bool)isGenerated;

@end
