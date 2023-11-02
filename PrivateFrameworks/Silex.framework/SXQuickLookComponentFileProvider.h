
@interface SXQuickLookComponentFileProvider : NSObject <SXQuickLookComponentFileProvider> {
    <SXDOMObjectProviding> * _DOMObjectProvider;
    <SXResourceDataSourceProvider> * _resourceDataSourceProvider;
    <SXDocumentShareURLProvider> * _shareURLProvider;
}

@property (nonatomic, readonly) <SXDOMObjectProviding> *DOMObjectProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXResourceDataSourceProvider> *resourceDataSourceProvider;
@property (nonatomic, readonly) <SXDocumentShareURLProvider> *shareURLProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)DOMObjectProvider;
- (id)copyFileIfNeeded:(id)arg1 to:(id)arg2 error:(id*)arg3;
- (void)fileForComponent:(id)arg1 onCompletion:(id /* block */)arg2 onError:(id /* block */)arg3;
- (id)initWithDOMObjectProvider:(id)arg1 resourceDataSourceProvider:(id)arg2 shareURLProvider:(id)arg3;
- (id)resourceDataSourceProvider;
- (id)shareURLProvider;

@end
