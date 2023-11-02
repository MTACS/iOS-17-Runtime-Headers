
@interface _PXGReusableViewInfo : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _anchorPoint;
    NSMutableArray * _hostedViewInfos;
    _PXGReusableViewInfo * _hostingViewInfo;
    CALayer * _layer;
    double  _rotation;
    double  _scale;
    <PXGInternalReusableView> * _view;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } anchorPoint;
@property (nonatomic, readonly) NSArray *hostedViewInfos;
@property (nonatomic) _PXGReusableViewInfo *hostingViewInfo;
@property (nonatomic, retain) CALayer *layer;
@property (nonatomic) double rotation;
@property (nonatomic) double scale;
@property (nonatomic, retain) <PXGInternalReusableView> *view;

- (void).cxx_destruct;
- (void)addHostedViewInfo:(id)arg1;
- (struct CGPoint { double x1; double x2; })anchorPoint;
- (id)description;
- (id)hostedViewInfos;
- (id)hostingViewInfo;
- (id)initWithReusableView:(id)arg1;
- (id)layer;
- (void)removeFromSuperViewInfo;
- (double)rotation;
- (double)scale;
- (void)setAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setHostingViewInfo:(id)arg1;
- (void)setLayer:(id)arg1;
- (void)setRotation:(double)arg1;
- (void)setScale:(double)arg1;
- (void)setView:(id)arg1;
- (id)view;

@end
