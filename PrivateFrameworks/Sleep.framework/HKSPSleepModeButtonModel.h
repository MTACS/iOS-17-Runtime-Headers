
@interface HKSPSleepModeButtonModel : NSObject <HKSPSleepStorePrivateObserver> {
    _HKBehavior * _behavior;
    <HKSPSleepModeButtonModelDelegate> * _delegate;
    long long  _sleepMode;
    HKSPSleepStore * _sleepStore;
}

@property (nonatomic, readonly) _HKBehavior *behavior;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HKSPSleepModeButtonModelDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic, readonly) long long sleepMode;
@property (nonatomic, readonly) HKSPSleepStore *sleepStore;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_checkSleepModeState;
- (void)_launchAppForOnboarding;
- (void)_queue_updateStateWithSleepMode:(long long)arg1;
- (void)_updateStateWithSleepMode:(long long)arg1;
- (id)behavior;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (id)initWithSleepStore:(id)arg1 delegate:(id)arg2 behavior:(id)arg3;
- (bool)isSelected;
- (void)setSelected:(bool)arg1;
- (long long)sleepMode;
- (id)sleepStore;
- (void)sleepStore:(id)arg1 sleepModeOnDidChange:(bool)arg2;

@end
