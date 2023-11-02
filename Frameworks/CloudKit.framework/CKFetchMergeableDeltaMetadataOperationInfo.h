
@interface CKFetchMergeableDeltaMetadataOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    NSArray * _mergeableValueIDs;
}

@property (nonatomic, copy) NSArray *mergeableValueIDs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mergeableValueIDs;
- (void)setMergeableValueIDs:(id)arg1;

@end
