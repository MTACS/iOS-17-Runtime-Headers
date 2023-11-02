
@interface AVPictureInPictureSampleBufferDisplayLayerHostView : UIView {
    struct CGSize { 
        double width; 
        double height; 
    }  _contentDimensions;
    bool  _deferringGeometryUpdates;
    AVPictureInPictureCALayerHostView * _hostView;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageQueueSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastKnownBounds;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastKnownFrame;
    bool  _needsGeometryUpdate;
}

@property (nonatomic) double beginTime;
@property (nonatomic) struct CGSize { double x1; double x2; } contentDimensions;
@property (nonatomic) unsigned int contextId;
@property (getter=isDeferringGeometryUpdates, nonatomic) bool deferringGeometryUpdates;
@property (nonatomic, readonly) AVPictureInPictureCALayerHostView *hostView;
@property (nonatomic) struct CGSize { double x1; double x2; } imageQueueSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } lastKnownBounds;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } lastKnownFrame;
@property (nonatomic) bool needsGeometryUpdate;

+ (Class)layerClass;

- (void).cxx_destruct;
- (void)_updateGeometryIfNeeded;
- (double)beginTime;
- (struct CGSize { double x1; double x2; })contentDimensions;
- (unsigned int)contextId;
- (id)hostView;
- (struct CGSize { double x1; double x2; })imageQueueSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDeferringGeometryUpdates;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })lastKnownBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })lastKnownFrame;
- (void)layoutSubviews;
- (bool)needsGeometryUpdate;
- (void)setBeginTime:(double)arg1;
- (void)setContentDimensions:(struct CGSize { double x1; double x2; })arg1;
- (void)setContextId:(unsigned int)arg1;
- (void)setDeferringGeometryUpdates:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 contentDimensions:(struct CGSize { double x1; double x2; })arg2 imageQueueSize:(struct CGSize { double x1; double x2; })arg3;
- (void)setImageQueueSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLastKnownBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLastKnownFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNeedsGeometryUpdate:(bool)arg1;

@end
