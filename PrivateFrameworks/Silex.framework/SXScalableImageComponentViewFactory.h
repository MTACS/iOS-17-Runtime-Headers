
@interface SXScalableImageComponentViewFactory : SXComponentViewFactory {
    <SXAnalyticsReportingProvider> * _analyticsReportingProvider;
    <SXAppStateMonitor> * _appStateMonitor;
    <SXFullscreenCanvasControllerFactory> * _canvasControllerFactory;
    <SXImageViewFactory> * _imageViewFactory;
    <SXMediaSharingPolicyProvider> * _mediaSharingPolicyProvider;
}

@property (nonatomic, readonly) <SXAnalyticsReportingProvider> *analyticsReportingProvider;
@property (nonatomic, readonly) <SXAppStateMonitor> *appStateMonitor;
@property (nonatomic, readonly) <SXFullscreenCanvasControllerFactory> *canvasControllerFactory;
@property (nonatomic, readonly) <SXImageViewFactory> *imageViewFactory;
@property (nonatomic, readonly) <SXMediaSharingPolicyProvider> *mediaSharingPolicyProvider;

- (void).cxx_destruct;
- (id)analyticsReportingProvider;
- (id)appStateMonitor;
- (id)canvasControllerFactory;
- (id)componentViewForComponent:(id)arg1;
- (id)imageViewFactory;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegateProvider:(id)arg3 componentStyleRendererFactory:(id)arg4 analyticsReportingProvider:(id)arg5 appStateMonitor:(id)arg6 imageViewFactory:(id)arg7 canvasControllerFactory:(id)arg8 mediaSharingPolicyProvider:(id)arg9;
- (id)mediaSharingPolicyProvider;
- (int)role;
- (id)type;

@end
