
@protocol WBSStartPageIconProxy <NSObject>

@required

- (UIImage *)icon;
- (void)setIcon:(UIImage *)arg1;
- (void)setIconFromBookmark:(WebBookmark *)arg1;
- (void)setSubtitle:(NSString *)arg1;
- (void)setTitle:(NSString *)arg1;
- (NSString *)subtitle;
- (NSString *)title;

@end
