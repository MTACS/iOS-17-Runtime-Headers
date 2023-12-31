
@interface SXGalleryComponentView : SXMediaComponentView <SXDragManagerDataSource> {
    SXDragManager * _dragManager;
}

@property (nonatomic, retain) SXDragManager *dragManager;

- (void).cxx_destruct;
- (id)dragManager;
- (id)dragManager:(id)arg1 dragableAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)forceImageViewFullscreen:(id)arg1;
- (id)hostingView;
- (id)imageViewForLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 analyticsReporting:(id)arg5 appStateMonitor:(id)arg6 mediaSharingPolicyProvider:(id)arg7;
- (void)setDragManager:(id)arg1;
- (id)viewForDragManager:(id)arg1;

@end
