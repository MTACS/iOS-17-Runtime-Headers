
@interface EMDiagnosticsHelper : NSObject <EMDiagnosticInfoProviding> {
    <EFCancelable> * _diagnosticInfoProviderToken;
    EMObjectID * _providerObjectID;
    EFLocked * _providers;
    unsigned long long  _source;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <EFCancelable> *diagnosticInfoProviderToken;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) EMObjectID *providerObjectID;
@property (nonatomic, retain) EFLocked *providers;
@property (nonatomic) unsigned long long source;
@property (readonly) Class superclass;

+ (id)log;

- (void).cxx_destruct;
- (void)dealloc;
- (id)diagnosticInfoProviderToken;
- (id)initWithDaemonInterface:(id)arg1;
- (void)provideDiagnosticsAt:(id)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (id)providerObjectID;
- (id)providers;
- (id)registerDiagnosticFileProvider:(id)arg1;
- (void)setDiagnosticInfoProviderToken:(id)arg1;
- (void)setProviders:(id)arg1;
- (void)setSource:(unsigned long long)arg1;
- (unsigned long long)source;

@end
