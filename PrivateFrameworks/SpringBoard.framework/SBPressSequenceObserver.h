
@interface SBPressSequenceObserver : NSObject {
    SBPressCollector * _pressCollector;
    NSString * _pressName;
    NSUUID * _sosTriggerUUID;
}

@property (nonatomic, readonly) SBPressCollector *pressCollector;
@property (nonatomic, readonly) NSString *pressName;

- (void).cxx_destruct;
- (void)_notePowerDownImminent;
- (void)_setPressCollector:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithPressName:(id)arg1;
- (void)noteDidBeginSOSWithUUID:(id)arg1;
- (id)pressCollector;
- (void)pressCollector:(id)arg1 didCollectSequence:(id)arg2;
- (id)pressName;

@end
