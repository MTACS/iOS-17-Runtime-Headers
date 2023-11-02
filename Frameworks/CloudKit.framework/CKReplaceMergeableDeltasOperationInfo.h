
@interface CKReplaceMergeableDeltasOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    NSArray * _replaceDeltasRequests;
}

@property (nonatomic, copy) NSArray *replaceDeltasRequests;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)replaceDeltasRequests;
- (void)setReplaceDeltasRequests:(id)arg1;

@end
