
@interface SXDOMObjectProviderFactory : NSObject <SXDOMObjectProviderFactory> {
    SXJSONObjectMerger * _componentStyleMerger;
    SXJSONObjectMerger * _componentTextStyleMerger;
    <SXDocumentControllerProvider> * _documentControllerProvider;
}

@property (nonatomic, readonly) SXJSONObjectMerger *componentStyleMerger;
@property (nonatomic, readonly) SXJSONObjectMerger *componentTextStyleMerger;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SXDocumentControllerProvider> *documentControllerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)componentStyleMerger;
- (id)componentTextStyleMerger;
- (id)createDOMObjectProvider;
- (id)documentControllerProvider;
- (id)initWithDocumentControllerProvider:(id)arg1 componentStyleMerger:(id)arg2 componentTextStyleMerger:(id)arg3;

@end
