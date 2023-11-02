
@interface PXGVideoPlayerView : UIView <PXGReusableView> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _clippingRect;
    <NSCopying> * _userData;
    PXVideoSession * _videoSession;
    PXVideoSessionUIView * _videoSessionView;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } clippingRect;
@property (nonatomic, readonly) bool shouldReuseWhenInvisible;
@property (nonatomic, copy) <NSCopying> *userData;
@property (nonatomic, retain) PXVideoSession *videoSession;
@property (nonatomic, readonly) PXVideoSessionUIView *videoSessionView;

- (void).cxx_destruct;
- (void)becomeReusable;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clippingRect;
- (id)init;
- (void)prepareForReuse;
- (void)setClippingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setUserData:(id)arg1;
- (void)setVideoSession:(id)arg1;
- (id)userData;
- (id)videoSession;
- (id)videoSessionView;

@end
