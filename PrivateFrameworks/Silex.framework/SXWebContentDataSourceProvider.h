
@interface SXWebContentDataSourceProvider : NSObject <SXWebContentDataSourceProviding> {
    <SXDOMObjectProviding> * _DOMObjectProvider;
    <SXResourceDataSourceProvider> * _resourceDataSourceProvider;
}

@property (nonatomic, readonly) <SXDOMObjectProviding> *DOMObjectProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXResourceDataSourceProvider> *resourceDataSourceProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)DOMObjectProvider;
- (id)dataSourcesForReferences:(id)arg1;
- (id)initWithDOMObjectProvider:(id)arg1 resourceDataSourceProvider:(id)arg2;
- (id)resourceDataSourceProvider;

@end
