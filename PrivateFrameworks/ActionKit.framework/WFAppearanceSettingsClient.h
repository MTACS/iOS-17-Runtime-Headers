
@interface WFAppearanceSettingsClient : WFSettingsClient <WFReversibleBooleanStateSetting> {
    UISUserInterfaceStyleMode * _styleMode;
}

@property (nonatomic, readonly) long long currentAppearance;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UISUserInterfaceStyleMode *styleMode;
@property (readonly) Class superclass;

+ (id)appearanceStream;
+ (void)createClientWithCompletionHandler:(id /* block */)arg1;
+ (void)getBookmarkForCurrentStateWithCompletionHandler:(id /* block */)arg1;
+ (void)getReversalStateWithBookmark:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)reversalArbiter;

- (void).cxx_destruct;
- (long long)currentAppearance;
- (void)getStateWithCompletionHandler:(id /* block */)arg1;
- (id)initWithStyleMode:(id)arg1;
- (void)setAppearance:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)setState:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)styleMode;

@end
