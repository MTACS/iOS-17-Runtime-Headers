
@interface _TtC7SwiftUIP33_1C25C4B203EEAC6A19839AC5BDB6A34530UILargeContentViewerItemBridge : NSObject <UILargeContentViewerItem> {
    void largeContentImage;
    void largeContentTitle;
}

@property (nonatomic, readonly) UIImage *largeContentImage;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } largeContentImageInsets;
@property (nonatomic, readonly) NSString *largeContentTitle;
@property (nonatomic, readonly) bool scalesLargeContentImage;
@property (nonatomic, readonly) bool showsLargeContentViewer;

- (void).cxx_destruct;
- (id)init;
- (id)largeContentImage;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })largeContentImageInsets;
- (id)largeContentTitle;
- (bool)scalesLargeContentImage;
- (bool)showsLargeContentViewer;

@end
