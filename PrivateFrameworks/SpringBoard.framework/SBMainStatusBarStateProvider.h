
@interface SBMainStatusBarStateProvider : SBStatusBarStateProvider <UIStatusBarStateObserver> {
    bool  _allButBatteryCloaked;
    NSHashTable * _contentAssertions;
    NSCountedSet * _dataUpdateAnimationsDisabledRequests;
    NSCountedSet * _itemDisabledRequests;
    bool  _itemIsDisabled;
    bool  _itemWasDisabled;
    bool  _killActivity;
    bool  _statusBarTimeRequiresUpdate;
    bool  _telephonyAndBluetoothCloaked;
    bool  _timeCloaked;
    bool  _timeEnabled;
}

@property (nonatomic, retain) NSHashTable *contentAssertions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_composePostDataFromAggregatorData:(struct { bool x1[46]; BOOL x2[64]; BOOL x3[64]; BOOL x4[256]; int x5; int x6; int x7; int x8; BOOL x9[100]; BOOL x10[100]; BOOL x11[100]; BOOL x12[100]; BOOL x13[2][100]; BOOL x14[1024]; unsigned int x15; unsigned int x16; unsigned int x17 : 1; unsigned int x18 : 1; int x19; int x20; unsigned int x21 : 1; unsigned int x22; unsigned int x23; int x24; unsigned int x25; BOOL x26[150]; int x27; int x28; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; BOOL x32[256]; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 2; unsigned int x37 : 2; unsigned int x38 : 1; unsigned int x39; unsigned int x40 : 1; unsigned int x41 : 1; unsigned int x42 : 1; BOOL x43[256]; BOOL x44[256]; BOOL x45[100]; unsigned int x46 : 1; unsigned int x47 : 1; unsigned int x48 : 1; unsigned int x49 : 1; unsigned int x50 : 1; double x51; unsigned int x52 : 1; unsigned int x53 : 1; unsigned int x54 : 1; BOOL x55[100]; BOOL x56[100]; BOOL x57[256]; BOOL x58[256]; }*)arg1;
- (void)_enableTime:(bool)arg1 crossfade:(bool)arg2 crossfadeDuration:(double)arg3 immediately:(bool)arg4;
- (id)_identifierForStateAggregator:(id)arg1;
- (bool)_shouldPostForVisitedItem:(int)arg1 withUpdates:(bool)arg2 toAggregatorData:(const struct { bool x1[46]; BOOL x2[64]; BOOL x3[64]; BOOL x4[256]; int x5; int x6; int x7; int x8; BOOL x9[100]; BOOL x10[100]; BOOL x11[100]; BOOL x12[100]; BOOL x13[2][100]; BOOL x14[1024]; unsigned int x15; unsigned int x16; unsigned int x17 : 1; unsigned int x18 : 1; int x19; int x20; unsigned int x21 : 1; unsigned int x22; unsigned int x23; int x24; unsigned int x25; BOOL x26[150]; int x27; int x28; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; BOOL x32[256]; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 2; unsigned int x37 : 2; unsigned int x38 : 1; unsigned int x39; unsigned int x40 : 1; unsigned int x41 : 1; unsigned int x42 : 1; BOOL x43[256]; BOOL x44[256]; BOOL x45[100]; unsigned int x46 : 1; unsigned int x47 : 1; unsigned int x48 : 1; unsigned int x49 : 1; unsigned int x50 : 1; double x51; unsigned int x52 : 1; unsigned int x53 : 1; unsigned int x54 : 1; BOOL x55[100]; BOOL x56[100]; BOOL x57[256]; BOOL x58[256]; }*)arg3 lastPost:(const struct { bool x1[46]; BOOL x2[64]; BOOL x3[64]; BOOL x4[256]; int x5; int x6; int x7; int x8; BOOL x9[100]; BOOL x10[100]; BOOL x11[100]; BOOL x12[100]; BOOL x13[2][100]; BOOL x14[1024]; unsigned int x15; unsigned int x16; unsigned int x17 : 1; unsigned int x18 : 1; int x19; int x20; unsigned int x21 : 1; unsigned int x22; unsigned int x23; int x24; unsigned int x25; BOOL x26[150]; int x27; int x28; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; BOOL x32[256]; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 2; unsigned int x37 : 2; unsigned int x38 : 1; unsigned int x39; unsigned int x40 : 1; unsigned int x41 : 1; unsigned int x42 : 1; BOOL x43[256]; BOOL x44[256]; BOOL x45[100]; unsigned int x46 : 1; unsigned int x47 : 1; unsigned int x48 : 1; unsigned int x49 : 1; unsigned int x50 : 1; double x51; unsigned int x52 : 1; unsigned int x53 : 1; unsigned int x54 : 1; BOOL x55[100]; BOOL x56[100]; BOOL x57[256]; BOOL x58[256]; }*)arg4;
- (void)_updateDisabledItems;
- (void)acquireContentAssertion:(id)arg1;
- (id)contentAssertions;
- (bool)contentAssertionsWantTimeEnabledAnimated:(inout bool*)arg1 duration:(inout double*)arg2;
- (void)dealloc;
- (void)didUpdateContentAssertion:(id)arg1;
- (void)disableDataUpdateAnimationsForRequestor:(id)arg1;
- (void)disableStatusBarItem:(int)arg1 requestor:(id)arg2;
- (void)enableStatusBarItem:(int)arg1 requestor:(id)arg2;
- (void)enableTime:(bool)arg1;
- (void)enableTime:(bool)arg1 crossfade:(bool)arg2 crossfadeDuration:(double)arg3;
- (void)forceUpdateLocalStatusBarData;
- (id)init;
- (bool)isTimeEnabled;
- (void)relinquishContentAssertion:(id)arg1;
- (void)setAllItemsExceptBatteryCloaked:(bool)arg1;
- (void)setContentAssertions:(id)arg1;
- (void)setTelephonyAndBluetoothItemsCloaked:(bool)arg1;
- (void)setTimeCloaked:(bool)arg1;
- (void)statusBarStateAggregatorDidRequestImmediateUpdates:(id)arg1;
- (void)statusBarStateAggregatorDidStopRequestingImmediateUpdates:(id)arg1;
- (void)statusBarStateProvider:(id)arg1 didPostStatusBarData:(const struct { bool x1[46]; BOOL x2[64]; BOOL x3[64]; BOOL x4[256]; int x5; int x6; int x7; int x8; BOOL x9[100]; BOOL x10[100]; BOOL x11[100]; BOOL x12[100]; BOOL x13[2][100]; BOOL x14[1024]; unsigned int x15; unsigned int x16; unsigned int x17 : 1; unsigned int x18 : 1; int x19; int x20; unsigned int x21 : 1; unsigned int x22; unsigned int x23; int x24; unsigned int x25; BOOL x26[150]; int x27; int x28; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; BOOL x32[256]; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 2; unsigned int x37 : 2; unsigned int x38 : 1; unsigned int x39; unsigned int x40 : 1; unsigned int x41 : 1; unsigned int x42 : 1; BOOL x43[256]; BOOL x44[256]; BOOL x45[100]; unsigned int x46 : 1; unsigned int x47 : 1; unsigned int x48 : 1; unsigned int x49 : 1; unsigned int x50 : 1; double x51; unsigned int x52 : 1; unsigned int x53 : 1; unsigned int x54 : 1; BOOL x55[100]; BOOL x56[100]; BOOL x57[256]; BOOL x58[256]; }*)arg2 withActions:(int)arg3;
- (void)stopDisablingDataUpdateAnimationsForRequestor:(id)arg1;
- (void)updateTimeEnabled;
- (void)updateTimeEnabledImmediately:(bool)arg1;

@end
