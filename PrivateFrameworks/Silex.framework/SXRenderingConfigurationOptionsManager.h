
@interface SXRenderingConfigurationOptionsManager : NSObject <SXHintsConfigurationOptionProvider> {
    <SXRenderingConfigurationProvider> * _configurationProvider;
    <SXDocumentProviding> * _documentProvider;
    <SXHintsConfigurationOption> * _hints;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic, readonly) <SXRenderingConfigurationProvider> *configurationProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SXDocumentProviding> *documentProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXHintsConfigurationOption> *hints;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)configurationProvider;
- (id)documentProvider;
- (id)hints;
- (id)initWithDocumentProvider:(id)arg1 configurationProvider:(id)arg2;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (bool)validateConfigurationOption:(id)arg1;
- (bool)validateConfigurationOption:(id)arg1 documentSpecVersion:(id)arg2 clientSpecVersion:(id)arg3;

@end
