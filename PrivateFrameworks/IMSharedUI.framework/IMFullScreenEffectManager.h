
@interface IMFullScreenEffectManager : NSObject <IMFullScreenEffectPlayerDelegate> {
    IMFullScreenEffectPlayer * _currentEffectPlayer;
    <IMFullScreenEffectManagerDelegate> * _delegate;
    NSMutableArray * _effectQueue;
    IMScheduledUpdater * _triggerUpdater;
}

@property (nonatomic, readonly) IMFullScreenEffect *currentEffect;
@property (nonatomic, retain) IMFullScreenEffectPlayer *currentEffectPlayer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <IMFullScreenEffectManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableArray *effectQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) IMScheduledUpdater *triggerUpdater;

- (void).cxx_destruct;
- (void)_stopCurrentFullscreenEffect:(bool)arg1;
- (double)adjustedEffectDurationForTesting:(id)arg1;
- (void)beginHoldingUpdatesForKey:(id)arg1;
- (id)currentEffect;
- (id)currentEffectPlayer;
- (void)dealloc;
- (id)delegate;
- (id)effectQueue;
- (void)endHoldingUpdatesForKey:(id)arg1;
- (void)fullScreenEffectPlayerDidFinish:(id)arg1;
- (void)fullScreenEffectPlayerDidPrepare:(id)arg1;
- (void)fullScreenEffectPlayerDidStart:(id)arg1;
- (id)init;
- (bool)isFullScreenEffectQueued:(id)arg1;
- (void)queueFullScreenEffectPlayer:(id)arg1 withRepeating:(bool)arg2;
- (void)setCurrentEffectPlayer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEffectQueue:(id)arg1;
- (void)setTriggerUpdater:(id)arg1;
- (void)stopAllFullscreenEffectPlayers;
- (void)stopCurrentFullscreenEffectPlayer;
- (void)triggerNextEffect;
- (id)triggerUpdater;
- (void)willStartFullScreenEffect:(id)arg1;

@end
