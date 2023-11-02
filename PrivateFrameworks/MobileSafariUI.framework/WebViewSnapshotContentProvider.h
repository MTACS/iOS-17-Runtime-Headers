
@interface WebViewSnapshotContentProvider : NSObject <TabSnapshotContentProvider> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentFrame;
    UIImage * _snapshotImage;
    WKWebView * _webView;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentFrame;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIColor *snapshotBackgroundColor;
@property (nonatomic, readonly) UIImage *snapshotContentImage;
@property (nonatomic, readonly) bool snapshotContentShouldUnderlapTopBackdrop;
@property (nonatomic, readonly) UIView *snapshotContentView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WKWebView *webView;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentFrame;
- (id)initWithWebView:(id)arg1 contentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)prepareForSnapshotOfSize:(struct CGSize { double x1; double x2; })arg1 completion:(id /* block */)arg2;
- (id)snapshotBackgroundColor;
- (id)snapshotContentImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })snapshotContentRectInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)snapshotContentShouldUnderlapTopBackdrop;
- (id)snapshotContentView;
- (id)webView;

@end
