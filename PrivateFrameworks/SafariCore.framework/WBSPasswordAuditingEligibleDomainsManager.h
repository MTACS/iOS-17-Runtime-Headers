
@interface WBSPasswordAuditingEligibleDomainsManager : NSObject {
    NSSet * _domainsIneligibleForPasswordAuditing;
}

@property (copy) NSSet *domainsIneligibleForPasswordAuditing;

- (void).cxx_destruct;
- (id)domainsIneligibleForPasswordAuditing;
- (id)init;
- (id)initWithDomainsIneligibleForPasswordAuditing:(id)arg1;
- (void)setDomainsIneligibleForPasswordAuditing:(id)arg1;

@end
