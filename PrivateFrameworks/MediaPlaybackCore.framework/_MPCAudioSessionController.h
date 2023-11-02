
@interface _MPCAudioSessionController : NSObject {
    AVAudioSession * _audioSession;
    NSString * _category;
    unsigned long long  _categoryOptions;
    id  _lostObserver;
    id  _resetObserver;
    unsigned long long  _routeSharingPolicy;
}

@property (nonatomic, retain) AVAudioSession *audioSession;
@property (nonatomic) NSString *category;
@property (nonatomic) unsigned long long categoryOptions;
@property (nonatomic, retain) id lostObserver;
@property (nonatomic, retain) id resetObserver;
@property (nonatomic) unsigned long long routeSharingPolicy;

- (void).cxx_destruct;
- (id)audioSession;
- (id)category;
- (unsigned long long)categoryOptions;
- (void)dealloc;
- (id)init;
- (id)lostObserver;
- (id)resetObserver;
- (void)restoreSessionSettingsFromSnapshot;
- (unsigned long long)routeSharingPolicy;
- (void)setAudioSession:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setCategoryOptions:(unsigned long long)arg1;
- (void)setLostObserver:(id)arg1;
- (void)setResetObserver:(id)arg1;
- (void)setRouteSharingPolicy:(unsigned long long)arg1;
- (void)setupObservations;
- (void)snapshotSessionSettings;
- (void)tearDownObservations;
- (void)updateAudioSession:(id)arg1 options:(unsigned long long)arg2 routeSharingPolicy:(unsigned long long)arg3;

@end
