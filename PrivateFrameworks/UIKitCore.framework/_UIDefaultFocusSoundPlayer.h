
@interface _UIDefaultFocusSoundPlayer : NSObject <_UIFocusSoundPlayer> {
    NSMutableDictionary * _focusSoundPools;
    NSObject<OS_dispatch_queue> * _soundQueue;
    NSTimer * _unregisterTimer;
    NSMutableDictionary * _urlPools;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *focusSoundPools;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *soundQueue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSTimer *unregisterTimer;
@property (nonatomic, retain) NSMutableDictionary *urlPools;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (void)_playSystemSound:(unsigned int)arg1 behavior:(unsigned int)arg2 withVolume:(double)arg3 pan:(double)arg4;
- (void)_registerForSystemSoundsIfNecessary;
- (void)dealloc;
- (id)focusSoundPools;
- (void)playSoundWithFocusSound:(long long)arg1 volume:(double)arg2 pan:(double)arg3;
- (void)playSoundWithURL:(id)arg1 volume:(double)arg2 pan:(double)arg3;
- (void)setFocusSoundPools:(id)arg1;
- (void)setSoundQueue:(id)arg1;
- (void)setUnregisterTimer:(id)arg1;
- (void)setUrlPools:(id)arg1;
- (id)soundQueue;
- (id)unregisterTimer;
- (id)urlPools;

@end
