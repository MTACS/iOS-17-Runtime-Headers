
@interface TIFilterParameterLoader : NSObject {
    NSObject<OS_dispatch_queue> * _loadQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *loadQueue;

- (void).cxx_destruct;
- (id)init;
- (id)loadCandidateFilterSpecificationForLanguageIdentifier:(id)arg1;
- (void)loadCandidateFilterSpecificationForLanguageIdentifier:(id)arg1 targetQueue:(id)arg2 completion:(id /* block */)arg3;
- (id)loadContentsForPlistWithLanguage:(id)arg1;
- (id)loadQueue;
- (id)parameterOverridesFolderURL;
- (id)parameterPlistForLanguage:(id)arg1;
- (id)universalParameterPlist;

@end
