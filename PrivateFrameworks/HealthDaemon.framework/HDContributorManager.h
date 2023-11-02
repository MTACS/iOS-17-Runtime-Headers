
@interface HDContributorManager : NSObject {
    HDProfile * _profile;
}

- (void).cxx_destruct;
- (id)_imPreferredAccount;
- (id)_primaryAppleAccount;
- (id)contributorForReference:(id)arg1 error:(id*)arg2;
- (id)defaultContributorReference;
- (id)initWithProfile:(id)arg1;
- (id)insertOrLookupContributorEntityWithReference:(id)arg1 transaction:(id)arg2 error:(id*)arg3;

@end
