
@interface SLRemoteView : UIControl <SLDServiceProxyDelegate> {
    UISSlotStyle * _lastRenderedSlotStyle;
    double  _maxWidth;
    <UISSlotAnyContent> * _placeholderSlotContent;
    bool  _remoteContentIsLoaded;
    bool  _remoteRenderingEnabled;
    NSObject<OS_dispatch_queue> * _remoteRenderingQueue;
    SLDServiceProxy * _serviceProxy;
    _UISlotView * _slotView;
}

@property (nonatomic, retain) UISSlotStyle *lastRenderedSlotStyle;
@property (nonatomic) double maxWidth;
@property (nonatomic, retain) <UISSlotAnyContent> *placeholderSlotContent;
@property (nonatomic) bool remoteContentIsLoaded;
@property (nonatomic) bool remoteRenderingEnabled;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *remoteRenderingQueue;
@property (nonatomic, readonly) SLDServiceProxy *serviceProxy;
@property (nonatomic, readonly) _UISlotView *slotView;

- (void).cxx_destruct;
- (id /* block */)_contentProviderForCurrentConfiguration;
- (id)_finalSlotStyleForStyle:(id)arg1;
- (id)initWithServiceProxyClass:(Class)arg1 maxWidth:(double)arg2;
- (id)lastRenderedSlotStyle;
- (id)makePlaceholderSlotContentForStyle:(id)arg1;
- (double)maxWidth;
- (id)placeholderSlotContent;
- (bool)remoteContentIsLoaded;
- (void)remoteContentIsLoadedValueChanged;
- (bool)remoteRenderingEnabled;
- (id)remoteRenderingQueue;
- (void)renderRemoteContentForLayerContextID:(unsigned long long)arg1 style:(id)arg2 yield:(id /* block */)arg3;
- (id)serviceProxy;
- (void)serviceProxyDidConnect:(id)arg1;
- (void)serviceProxyDidDisconnect:(id)arg1;
- (void)setLastRenderedSlotStyle:(id)arg1;
- (void)setMaxWidth:(double)arg1;
- (void)setPlaceholderSlotContent:(id)arg1;
- (void)setRemoteContentIsLoaded:(bool)arg1;
- (void)setRemoteRenderingEnabled:(bool)arg1;
- (bool)shouldInvalidatePreviousPlaceHolderSlotContent:(id)arg1 forStyle:(id)arg2;
- (id)slotView;

@end
