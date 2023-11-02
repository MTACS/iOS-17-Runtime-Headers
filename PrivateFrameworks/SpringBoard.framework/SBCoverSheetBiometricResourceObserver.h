
@interface SBCoverSheetBiometricResourceObserver : NSObject <SBPearlMatchingStateProvider, SBUIBiometricResourceObserver> {
    <SBUIBiometricResource> * _biometricResource;
    <SBPearlMatchingStateProviderDelegate> * _delegate;
    bool  _seenMatchResultSinceScreenOn;
}

@property (nonatomic) <SBUIBiometricResource> *biometricResource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBPearlMatchingStateProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool pearlMatchEnabledAndPossible;
@property (nonatomic) bool seenMatchResultSinceScreenOn;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)biometricResource;
- (void)biometricResource:(id)arg1 observeEvent:(unsigned long long)arg2;
- (id)delegate;
- (id)initWithBiometricResource:(id)arg1;
- (bool)pearlMatchEnabledAndPossible;
- (void)reset;
- (bool)seenMatchResultSinceScreenOn;
- (void)setBiometricResource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSeenMatchResultSinceScreenOn:(bool)arg1;

@end
