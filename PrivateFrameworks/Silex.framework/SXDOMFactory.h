
@interface SXDOMFactory : NSObject <SXDOMFactory> {
    <SXDocumentProviding> * _documentProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SXDocumentProviding> *documentProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createDOM;
- (id)documentProvider;
- (id)initWithDocumentProvider:(id)arg1;

@end
