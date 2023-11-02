
@protocol DRSDSRequestObject <NSObject>

@required

- (NSString *)functionName;
- (<DRSDecisionServerBatchRequest> *)pbBatchInstance;
- (Class)pbBatchResponseClass;
- (PBRequest *)pbRequest;
- (NSUUID *)uniqueID;

@end
