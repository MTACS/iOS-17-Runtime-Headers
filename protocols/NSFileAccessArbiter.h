
@protocol NSFileAccessArbiter <NSObject>

@required

- (oneway void)cancelAccessClaimForID:(NSString *)arg1;
- (oneway void)revokeAccessClaimForID:(NSString *)arg1;
- (oneway void)revokeSubarbitrationClaimForID:(NSString *)arg1;
- (oneway void)tiePresenterForID:(NSString *)arg1 toItemAtURL:(NSURLPromisePair *)arg2;
- (oneway void)writerWithPurposeID:(NSString *)arg1 didChangeItemAtURL:(NSURLPromisePair *)arg2;
- (oneway void)writerWithPurposeID:(NSString *)arg1 didChangeSharingOfItemAtURL:(NSURLPromisePair *)arg2;
- (oneway void)writerWithPurposeID:(NSString *)arg1 didChangeUbiquityAttributes:(NSSet *)arg2 ofItemAtURL:(NSURLPromisePair *)arg3;
- (oneway void)writerWithPurposeID:(NSString *)arg1 didChangeUbiquityOfItemAtURL:(NSURLPromisePair *)arg2;
- (oneway void)writerWithPurposeID:(NSString *)arg1 didDisconnectItemAtURL:(NSURLPromisePair *)arg2;
- (oneway void)writerWithPurposeID:(NSString *)arg1 didMakeItemDisappearAtURL:(NSURLPromisePair *)arg2;
- (oneway void)writerWithPurposeID:(NSString *)arg1 didReconnectItemAtURL:(NSURLPromisePair *)arg2;
- (oneway void)writerWithPurposeID:(NSString *)arg1 didVersionChangeOfKind:(NSString *)arg2 toItemAtURL:(NSURLPromisePair *)arg3 withClientID:(NSString *)arg4 name:(NSString *)arg5;

@end
