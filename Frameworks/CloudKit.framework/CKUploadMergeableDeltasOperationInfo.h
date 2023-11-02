
@interface CKUploadMergeableDeltasOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    NSArray * _deltas;
    NSArray * _replacementRequests;
}

@property (nonatomic, copy) NSArray *deltas;
@property (nonatomic, copy) NSArray *replacementRequests;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)deltas;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)replacementRequests;
- (void)setDeltas:(id)arg1;
- (void)setReplacementRequests:(id)arg1;

@end
