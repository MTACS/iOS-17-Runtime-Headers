
@interface SXLayoutPolicyManager : NSObject <SXLayoutPolicyManager> {
    <SXDocumentProviding> * _documentProvider;
    <SXHintsConfigurationOptionProvider> * _hintsConfigurationOptionProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SXDocumentProviding> *documentProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXHintsConfigurationOptionProvider> *hintsConfigurationOptionProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)documentProvider;
- (id)hintsConfigurationOptionProvider;
- (id)initWithDocumentProvider:(id)arg1 hintsConfigurationOptionProvider:(id)arg2;
- (bool)shouldPerformLayoutWithLayoutOptionsDiff:(unsigned long long)arg1;

@end
