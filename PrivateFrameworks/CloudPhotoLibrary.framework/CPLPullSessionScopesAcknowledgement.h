
@interface CPLPullSessionScopesAcknowledgement : CPLChangeSessionUpdate {
    CPLChangeBatch * _scopesChangeBatch;
}

@property (nonatomic, readonly) CPLChangeBatch *scopesChangeBatch;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)applyToStore:(id)arg1 error:(id*)arg2;
- (bool)discardFromStore:(id)arg1 error:(id*)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStore:(id)arg1 scopesChangeBatch:(id)arg2;
- (id)scopesChangeBatch;
- (id)statusDescription;
- (id)storageForStatusInStore:(id)arg1;

@end
