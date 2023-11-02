
@interface SXLegacyPrerollAdFactory : NSObject <SXVideoAdProviderFactory> {
    <SXScrollObserverManager> * _scrollObserverManager;
    SXViewport * _viewport;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXScrollObserverManager> *scrollObserverManager;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SXViewport *viewport;

- (void).cxx_destruct;
- (id)createVideoAdProviderForComponentView:(id)arg1 videoPlayerViewController:(id)arg2 analyticsReporter:(id)arg3;
- (id)initWithViewport:(id)arg1 scrollObserverManager:(id)arg2;
- (id)scrollObserverManager;
- (id)viewport;

@end
