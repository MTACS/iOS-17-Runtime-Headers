
@protocol UILargeContentViewerItem <NSObject>

@required

- (UIImage *)largeContentImage;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })largeContentImageInsets;
- (NSString *)largeContentTitle;
- (bool)scalesLargeContentImage;
- (bool)showsLargeContentViewer;

@end
