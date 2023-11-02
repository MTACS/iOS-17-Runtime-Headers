
@interface DKDiagnosticXPCManager : DKDiagnosticManager <DKAssetResponder, DKUIResponder> {
    NSMutableArray * _activeDiagnostics;
    NSMutableDictionary * _diagnostics;
    <DKUIResponder> * _uiResponder;
}

@property (nonatomic, retain) NSMutableArray *activeDiagnostics;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *diagnostics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) <DKUIResponder> *uiResponder;

- (void).cxx_destruct;
- (id)activeDiagnostics;
- (id)attributesForIdentifier:(id)arg1;
- (void)beginDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 completion:(id /* block */)arg3;
- (void)cancelAllDiagnostics;
- (id)diagnostics;
- (void)diagnosticsWithCompletion:(id /* block */)arg1;
- (void)getAsset:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1 connectionRoute:(unsigned long long)arg2;
- (void)registerDiagnosticWithAttributes:(id)arg1;
- (void)setActiveDiagnostics:(id)arg1;
- (void)setDiagnostics:(id)arg1;
- (void)setUiResponder:(id)arg1;
- (void)showUI:(id)arg1 completion:(id /* block */)arg2;
- (id)uiResponder;

@end
