
@interface WBSAutoFillAssociatedDomainsManager : NSObject {
    NSMutableDictionary * _domainToDomainsWithAssociatedCredentials;
    NSArray * _domainsToConsiderIdentical;
    NSMutableDictionary * _domainsToDomainsToConsiderIdentical;
    NSArray * _domainsWithAssociatedCredentials;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, copy) NSArray *domainsToConsiderIdentical;
@property (nonatomic, copy) NSArray *domainsWithAssociatedCredentials;

- (void).cxx_destruct;
- (void)_updateDomainToDomainsToConsiderIdentical;
- (void)_updateDomainToDomainsWithAssociatedCredentials;
- (id)domainsToConsiderIdentical;
- (id)domainsToConsiderIdenticalToDomain:(id)arg1;
- (id)domainsWithAssociatedCredentials;
- (id)domainsWithAssociatedCredentialsForDomain:(id)arg1;
- (id)init;
- (id)initWithDomainsWithAssociatedCredentials:(id)arg1;
- (id)initWithDomainsWithAssociatedCredentials:(id)arg1 domainsToConsiderIdentical:(id)arg2;
- (void)setDomainsToConsiderIdentical:(id)arg1;
- (void)setDomainsWithAssociatedCredentials:(id)arg1;

@end
