
@interface CPLPullSessionRevertRecords : CPLChangeSessionUpdate {
    CPLChangeBatch * _revertedChangesBatch;
}

@property (nonatomic, readonly) CPLChangeBatch *revertedChangesBatch;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)applyToStore:(id)arg1 error:(id*)arg2;
- (bool)discardFromStore:(id)arg1 error:(id*)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStore:(id)arg1 revertedChangesBatch:(id)arg2;
- (id)revertedChangesBatch;
- (id)statusDescription;
- (id)storageForStatusInStore:(id)arg1;

@end
