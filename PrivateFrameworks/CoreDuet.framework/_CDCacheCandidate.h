
@interface _CDCacheCandidate : NSObject {
    NSString * _bundleId;
    NSString * _derivedIntentId;
    NSString * _domainId;
    NSString * _recipientsId;
}

@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic, retain) NSString *derivedIntentId;
@property (nonatomic, retain) NSString *domainId;
@property (nonatomic, retain) NSString *recipientsId;

- (void).cxx_destruct;
- (id)bundleId;
- (id)derivedIntentId;
- (id)description;
- (id)domainId;
- (unsigned long long)hash;
- (id)initWithDomainId:(id)arg1 derivedIntentId:(id)arg2 bundleId:(id)arg3 recipientsId:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)recipientsId;
- (void)setBundleId:(id)arg1;
- (void)setDerivedIntentId:(id)arg1;
- (void)setDomainId:(id)arg1;
- (void)setRecipientsId:(id)arg1;

@end
