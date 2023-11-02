
@interface SBSALayoutModeLayoutProvider : SBSABasePreferencesProvider <SBSAElementLayoutModeSupporting> {
    bool  _performedInitialLayoutIfNecessary;
    long long  _supportedElementLayoutMode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long supportedElementLayoutMode;

- (id)defaultTransitionSettings;
- (id)description;
- (id)initWithLayoutMode:(long long)arg1;
- (id)preferencesFromContext:(id)arg1;
- (long long)supportedElementLayoutMode;

@end
