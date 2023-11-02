
@interface WebDataSource : NSObject {
    void * _private;
}

@property (setter=_setQuickLookContent:, nonatomic, copy) NSDictionary *_quickLookContent;
@property (nonatomic, readonly) NSDictionary *_quickLookContent;
@property (setter=_setQuickLookPreviewLoaderClient:, nonatomic) void*_quickLookPreviewLoaderClient;
@property (nonatomic, readonly, copy) NSData *data;
@property (nonatomic, readonly) NSURLRequest *initialRequest;
@property (getter=isLoading, nonatomic, readonly) bool loading;
@property (nonatomic, readonly) WebResource *mainResource;
@property (nonatomic, readonly, copy) NSString *pageTitle;
@property (nonatomic, readonly) <WebDocumentRepresentation> *representation;
@property (nonatomic, readonly) NSMutableURLRequest *request;
@property (nonatomic, readonly) NSURLResponse *response;
@property (nonatomic, readonly, copy) NSArray *subresources;
@property (nonatomic, readonly, copy) NSString *textEncodingName;
@property (nonatomic, readonly) NSURL *unreachableURL;
@property (nonatomic, readonly) WebArchive *webArchive;
@property (nonatomic, readonly) WebFrame *webFrame;

+ (id)_repTypesAllowImageTypeOmission:(bool)arg1;
+ (Class)_representationClassForMIMEType:(id)arg1 allowingPlugins:(bool)arg2;
+ (void)initialize;

- (id)_URL;
- (void)_addSubframeArchives:(id)arg1;
- (id)_documentFragmentWithArchive:(id)arg1;
- (id)_documentFragmentWithImageResource:(id)arg1;
- (struct NakedPtr<WebCore::DocumentLoader> { struct DocumentLoader {} *x1; })_documentLoader;
- (void)_finishedLoading;
- (id)_imageElementWithImageResource:(id)arg1;
- (id)_initWithDocumentLoader:(void*)arg1;
- (bool)_isDocumentHTML;
- (id)_mainDocumentError;
- (void)_makeRepresentation;
- (id)_quickLookContent;
- (void*)_quickLookPreviewLoaderClient;
- (void)_receivedData:(id)arg1;
- (void)_replaceSelectionWithArchive:(id)arg1 selectReplacement:(bool)arg2;
- (id)_responseMIMEType;
- (void)_revertToProvisionalState;
- (void)_setAllowToBeMemoryMapped;
- (void)_setDeferMainResourceDataLoad:(bool)arg1;
- (void)_setMainDocumentError:(id)arg1;
- (void)_setOverrideTextEncodingName:(id)arg1;
- (void)_setQuickLookContent:(id)arg1;
- (void)_setQuickLookPreviewLoaderClient:(void*)arg1;
- (void)_setRepresentation:(id)arg1;
- (id)_webView;
- (void)addSubresource:(id)arg1;
- (id)data;
- (id)dataSourceDelegate;
- (void)dealloc;
- (id)initWithRequest:(id)arg1;
- (id)initialRequest;
- (bool)isLoading;
- (id)mainResource;
- (id)pageTitle;
- (id)representation;
- (id)request;
- (id)response;
- (void)setDataSourceDelegate:(id)arg1;
- (id)subresourceForURL:(id)arg1;
- (id)subresources;
- (id)textEncodingName;
- (id)unreachableURL;
- (id)webArchive;
- (id)webFrame;

@end
