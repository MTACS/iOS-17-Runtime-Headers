
@interface CNDonationStore : NSObject {
    <CNDonationAgentAdapter> * _adapter;
}

@property (nonatomic, readonly) <CNDonationAgentAdapter> *adapter;

- (void).cxx_destruct;
- (id)adapter;
- (id)changeFromAccount:(id)arg1 toAccount:(id)arg2;
- (void)donateMeCardValues:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)donatedMeCard;
- (id)donatedMeCardEither;
- (void)fetchDonatedMeCard:(id /* block */)arg1;
- (id)init;
- (id)initWithAdapter:(id)arg1;
- (id)meCardDonations;
- (void)rejectValueWithDonationIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)rejectValuesWithClusterIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeAllRejectionsWithCompletionHandler:(id /* block */)arg1;
- (void)removeDonatedMeCardValuesForIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;

@end
