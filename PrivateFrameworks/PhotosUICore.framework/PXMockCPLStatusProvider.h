
@interface PXMockCPLStatusProvider : PXObservable <PXCPLStatusProvider, PXSettingsKeyObserver> {
    PXCPLStatus * _status;
    bool  _userDefaultsMocks;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXCPLStatus *status;
@property (readonly) Class superclass;

+ (id)_currentMockedStatus;
+ (id)mockStatusProvider;
+ (bool)shouldUseMockService;
+ (id)userDefaultsMockStatusProvider;

- (void).cxx_destruct;
- (void)_updateStatus;
- (void)dealloc;
- (id)init;
- (id)initWithUserDefaultsMocks:(bool)arg1;
- (double)nextOverrideResumeTimeInterval;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setStatus:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)status;

@end
