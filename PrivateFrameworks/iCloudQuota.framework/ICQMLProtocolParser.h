
@interface ICQMLProtocolParser : NSObject

+ (id)parseMaxDelaySecsFromFetchOffersResponse:(id)arg1;
+ (id)parseMaxDelaySecsFromPushNotification:(id)arg1;
+ (bool)shouldCallMlDaemonForFetchOfferStub:(id)arg1;
+ (bool)shouldCallMlDaemonForPushNotification:(id)arg1;

@end
