
@interface CKDOperationInfoMetadata : NSObject {
    NSDate * _lastAttemptDate;
    CKOperationInfo * _operationInfo;
    NSNumber * _retryNumber;
}

@property (nonatomic, readonly, copy) NSDate *lastAttemptDate;
@property (nonatomic, readonly) CKOperationInfo *operationInfo;
@property (nonatomic, readonly, copy) NSNumber *retryNumber;

- (void).cxx_destruct;
- (id)initWithOperationInfo:(id)arg1 lastAttemptDate:(id)arg2 retryNumber:(id)arg3;
- (id)lastAttemptDate;
- (id)operationInfo;
- (id)retryNumber;

@end
