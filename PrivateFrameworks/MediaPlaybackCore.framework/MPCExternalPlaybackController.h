
@interface MPCExternalPlaybackController : NSObject <MFExternalPlaybackController, MPAVRoutingControllerDelegate, MPCExternalPlaybackRouter> {
    MPCPlaybackEngine * _playbackEngine;
    MPAVRoutingController * _routingController;
    MPCMediaFoundationTranslator * _translator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MPCPlaybackEngine *playbackEngine;
@property (nonatomic, readonly) MPAVRoutingController *routingController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MPCMediaFoundationTranslator *translator;

- (void).cxx_destruct;
- (void)configureExternalPlaybackForPlayer:(id)arg1 queueItem:(id)arg2;
- (long long)exernalPlaybackRouteRestrictionForItem:(id)arg1 route:(id)arg2 isScreenMirroringActive:(bool)arg3;
- (id)initWithPlaybackEngine:(id)arg1 translator:(id)arg2;
- (bool)isExternalPlaybackAllowedForItem:(id)arg1;
- (void)pickBestDeviceRoute;
- (id)playbackEngine;
- (bool)playerShouldUseAudiOnlyMode:(id)arg1 item:(id)arg2 externalScreenType:(long long)arg3;
- (id)routingController;
- (void)routingControllerExternalScreenTypeDidChange:(id)arg1;
- (id)translator;

@end
