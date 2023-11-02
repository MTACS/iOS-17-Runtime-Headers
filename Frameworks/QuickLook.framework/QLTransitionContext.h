
@interface QLTransitionContext : NSObject <NSSecureCoding> {
    bool  _contextPreparedToSend;
    double  _hostNavigationOffset;
    bool  _isSourceTransformed;
    QLPreviewController * _previewController;
    struct CGSize { 
        double width; 
        double height; 
    }  _previewItemSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceBounds;
    struct CGPoint { 
        double x; 
        double y; 
    }  _sourceCenter;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceFrame;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _sourceTransform;
    UIView * _sourceView;
    UIView * _sourceViewSnapshot;
    UIImage * _sourceViewSnapshotImage;
    double  _topNavigationOffset;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _uncroppedFrame;
    bool  _usingViewForZoomTransition;
}

@property double hostNavigationOffset;
@property bool isSourceTransformed;
@property struct CGSize { double x1; double x2; } previewItemSize;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceBounds;
@property struct CGPoint { double x1; double x2; } sourceCenter;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceFrame;
@property struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } sourceTransform;
@property (nonatomic, retain) UIView *sourceView;
@property (nonatomic, retain) UIView *sourceViewSnapshot;
@property double topNavigationOffset;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } uncroppedFrame;
@property bool usingViewForZoomTransition;

+ (id)firstChildNavigationControllerFromViewController:(id)arg1;
+ (bool)supportsSecureCoding;
+ (bool)useImageTransitionForPreviewController:(id)arg1;
+ (bool)useViewTransitionForPreviewController:(id)arg1;
+ (bool)useZoomTransitionForPreviewController:(id)arg1;

- (void).cxx_destruct;
- (void)_snapshotSourceViewIfNeeded;
- (void)encodeWithCoder:(id)arg1;
- (double)hostNavigationOffset;
- (id)initWithCoder:(id)arg1;
- (id)initWithQLPreviewController:(id)arg1 containerView:(id)arg2 toViewController:(id)arg3;
- (bool)isSourceTransformed;
- (void)prepareContextToSend;
- (struct CGSize { double x1; double x2; })previewItemSize;
- (void)setHostNavigationOffset:(double)arg1;
- (void)setIsSourceTransformed:(bool)arg1;
- (void)setPreviewItemSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSourceBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSourceCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setSourceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSourceTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setSourceView:(id)arg1;
- (void)setSourceViewSnapshot:(id)arg1;
- (void)setTopNavigationOffset:(double)arg1;
- (void)setUncroppedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setUpTransitionSourceView;
- (void)setUsingViewForZoomTransition:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceBounds;
- (struct CGPoint { double x1; double x2; })sourceCenter;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceFrame;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })sourceTransform;
- (id)sourceView;
- (id)sourceViewSnapshot;
- (id)sourceViewSnapshotImage;
- (double)topNavigationOffset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })uncroppedFrame;
- (bool)usingViewForZoomTransition;

@end
