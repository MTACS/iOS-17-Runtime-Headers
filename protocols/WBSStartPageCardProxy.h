
@protocol WBSStartPageCardProxy <NSObject>

@required

- (UIImage *)badge;
- (NSString *)caption;
- (UIImage *)image;
- (void)setBadge:(UIImage *)arg1;
- (void)setCaption:(NSString *)arg1;
- (void)setCaptionText:(NSString *)arg1 icon:(UIImage *)arg2;
- (void)setImage:(UIImage *)arg1;
- (void)setImageFromBookmark:(WebBookmark *)arg1;
- (void)setSubtitle:(NSString *)arg1;
- (void)setTitle:(NSString *)arg1;
- (NSString *)subtitle;
- (NSString *)title;

@end
