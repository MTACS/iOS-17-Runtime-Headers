
@interface HDFreezeQuantitySampleSeriesOperation : HDJournalableOperation {
    NSDate * _endDate;
    long long  _freezeResult;
    NSUUID * _frozenIdentifier;
    NSUUID * _identifier;
    NSDictionary * _metadata;
}

@property (nonatomic, readonly, copy) NSDate *endDate;
@property (nonatomic, readonly) long long freezeResult;
@property (nonatomic, readonly, copy) NSUUID *frozenIdentifier;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly, copy) NSDictionary *metadata;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (long long)freezeResult;
- (id)frozenIdentifier;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 metadata:(id)arg2 endDate:(id)arg3;
- (id)metadata;
- (bool)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id*)arg3;

@end
