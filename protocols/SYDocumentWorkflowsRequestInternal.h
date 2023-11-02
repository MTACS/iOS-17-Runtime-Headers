
@protocol SYDocumentWorkflowsRequestInternal <SYDocumentWorkflowsRequest>

@required

- (NSString *)documentIndexKey;
- (void)performWithServiceProxy:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: <SYDocumentWorkflowsServiceInterface> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (bool)verifyParameters;

@end
