
@interface RENowPlayingRelevanceProviderManager : RERelevanceProviderManager <MPRequestResponseControllerDelegate, RENowPlayingRelevanceProviderManagerProperties> {
    long long  _playbackState;
    MPRequestResponseController * _requestResponseController;
    unsigned long long  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long playbackState;
@property (nonatomic, readonly) MPRequestResponseController *requestResponseController;
@property (nonatomic, readonly) unsigned long long state;
@property (readonly) Class superclass;

+ (id)_features;
+ (Class)_relevanceProviderClass;

- (void).cxx_destruct;
- (void)_handleRoutingControllerActiveSystemRouteDidChange:(id)arg1;
- (void)_updateActiveRoute;
- (void)_updatePlaybackState;
- (id)_valueForProvider:(id)arg1 feature:(id)arg2;
- (void)controller:(id)arg1 defersResponseReplacement:(id /* block */)arg2;
- (id)initWithQueue:(id)arg1;
- (void)pause;
- (long long)playbackState;
- (id)requestResponseController;
- (void)resume;
- (unsigned long long)state;

@end
