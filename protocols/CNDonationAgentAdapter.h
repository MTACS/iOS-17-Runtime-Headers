
@protocol CNDonationAgentAdapter <NSObject>

@required

- (CNFuture *)changeFromAccount:(ACAccount *)arg1 toAccount:(ACAccount *)arg2;
- (CNFuture *)donateMeCardValues:(NSArray *)arg1;
- (CNEither *)donatedMeCardEither;
- (CNFuture *)fetchDonatedMeCard;
- (CNFuture *)meCardDonations;
- (CNFuture *)rejectValueWithDonationIdentifier:(NSString *)arg1;
- (CNFuture *)rejectValuesWithClusterIdentifier:(NSString *)arg1;
- (CNFuture *)removeAllRejections;
- (CNFuture *)removeDonatedMeCardValuesForIdentifiers:(NSArray *)arg1;

@end
