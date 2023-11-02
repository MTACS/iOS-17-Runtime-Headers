
@interface BRCSyncOperationBackoffRatio : NSObject <NSSecureCoding> {
    unsigned long long  _failedSyncOperations;
    unsigned long long  _totalSyncOperations;
}

+ (bool)supportsSecureCoding;

- (float)backoffRatio;
- (void)clear;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)newSyncOperationWithError:(id)arg1;

@end
