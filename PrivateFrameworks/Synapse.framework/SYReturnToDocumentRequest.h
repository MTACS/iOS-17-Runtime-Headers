
@interface SYReturnToDocumentRequest : NSObject <SYDocumentWorkflowsRequest, SYDocumentWorkflowsRequestInternal> {
    SYDocumentAttributes * _documentAttributes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SYDocumentAttributes *documentAttributes;
@property (nonatomic, readonly) NSString *documentIndexKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)documentAttributes;
- (id)documentIndexKey;
- (void)performWithServiceProxy:(id)arg1 completion:(id /* block */)arg2;
- (void)setDocumentAttributes:(id)arg1;
- (bool)verifyParameters;

@end
