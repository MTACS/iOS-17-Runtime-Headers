
@interface GDViewServiceHelper : NSObject

+ (id)donationViewWithAccessAssertion:(id)arg1 database:(id)arg2 error:(id*)arg3;
+ (id)featureViewWithAccessAssertion:(id)arg1 database:(id)arg2 error:(id*)arg3;
+ (id)firstPartyLongTermTopicViewWithAccessAssertion:(id)arg1 database:(id)arg2 error:(id*)arg3;
+ (id)firstPartyShortTermTopicViewWithAccessAssertion:(id)arg1 database:(id)arg2 error:(id*)arg3;
+ (id)pageRankViewWithAccessAssertion:(id)arg1 database:(id)arg2 error:(id*)arg3;
+ (id)personViewWithAccessAssertion:(id)arg1 database:(id)arg2 error:(id*)arg3;
+ (id)remoteViewAccessRequester;
+ (id)visualIdentifierViewWithAccessAssertion:(id)arg1 database:(id)arg2 error:(id*)arg3;

@end
