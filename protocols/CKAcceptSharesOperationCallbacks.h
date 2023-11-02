
@protocol CKAcceptSharesOperationCallbacks <CKOperationCallbacks>

@required

- (void)handleShareAcceptanceForURL:(NSURL *)arg1 share:(CKShare *)arg2 error:(NSError *)arg3;

@end
