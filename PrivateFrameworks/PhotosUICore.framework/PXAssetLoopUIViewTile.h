
@interface PXAssetLoopUIViewTile : NSObject <PXAssetTile, PXAutoplayTile, PXChangeObserver, PXReusableObject, PXUIViewBasicTile> {
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _bestPlaybackTimeRange;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    double  _cornerRadius;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _desiredContentsRect;
    long long  _desiredPlayState;
    PXImageRequester * _imageRequester;
    unsigned long long  _requestCount;
    PXVideoSession * _videoSession;
    PXVideoSessionUIView * _videoView;
    _PXAssetLoopUIView * _view;
}

@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } bestPlaybackTimeRange;
@property (nonatomic) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic) double cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } desiredContentsRect;
@property (nonatomic) long long desiredPlayState;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXImageRequester *imageRequester;
@property (readonly) Class superclass;
@property (nonatomic, retain) PXVideoSession *videoSession;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (void)_reloadVideoSessionIfNecessary;
- (void)_updateDesiredDynamicRange;
- (void)_updateImageRequester;
- (void)_updateLayer;
- (void)_updateVideoSession;
- (void)becomeReusable;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })bestPlaybackTimeRange;
- (struct CGSize { double x1; double x2; })contentSize;
- (double)cornerRadius;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })desiredContentsRect;
- (long long)desiredPlayState;
- (void)didApplyGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; })arg1 withUserData:(id)arg2;
- (id)imageRequester;
- (id)init;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)prepareForReuse;
- (void)setBestPlaybackTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setDesiredContentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDesiredPlayState:(long long)arg1;
- (void)setImageRequester:(id)arg1;
- (void)setVideoSession:(id)arg1;
- (id)videoSession;
- (id)view;

@end
