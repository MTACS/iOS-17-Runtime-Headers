
@interface SYReturnToSenderRequest : NSObject <SYDocumentWorkflowsRequest, SYDocumentWorkflowsRequestInternal> {
    SYDocument * _document;
    bool  _shouldCreateNewMessage;
    SYDocumentAttributes * _storedDocumentAttributes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SYDocument *document;
@property (nonatomic, readonly) NSString *documentIndexKey;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldCreateNewMessage;
@property (nonatomic, retain) SYDocumentAttributes *storedDocumentAttributes;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)document;
- (id)documentIndexKey;
- (id)init;
- (void)performWithServiceProxy:(id)arg1 completion:(id /* block */)arg2;
- (void)setDocument:(id)arg1;
- (void)setShouldCreateNewMessage:(bool)arg1;
- (void)setStoredDocumentAttributes:(id)arg1;
- (bool)shouldCreateNewMessage;
- (id)storedDocumentAttributes;
- (bool)verifyParameters;

@end
