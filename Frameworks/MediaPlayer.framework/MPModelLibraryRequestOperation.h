
@interface MPModelLibraryRequestOperation : MPAsyncOperation {
    MPModelLibraryRequest * _request;
    id /* block */  _responseHandler;
}

@property (nonatomic, copy) MPModelLibraryRequest *request;
@property (nonatomic, copy) id /* block */ responseHandler;

- (void).cxx_destruct;
- (void)_executeLegacyRequest;
- (void)_executeNewRequest;
- (void)_insertPropertyCacheForEntityPID:(long long)arg1 entityClass:(void*)arg2 entityTranslator:(id)arg3 translationContext:(id)arg4 propertyCachesVector:(const void*)arg5;
- (id)_itemProperties;
- (id)_libraryView;
- (void)_sanityCheckRequest;
- (id)_sectionProperties;
- (void)execute;
- (id)request;
- (id /* block */)responseHandler;
- (void)setRequest:(id)arg1;
- (void)setResponseHandler:(id /* block */)arg1;

@end
