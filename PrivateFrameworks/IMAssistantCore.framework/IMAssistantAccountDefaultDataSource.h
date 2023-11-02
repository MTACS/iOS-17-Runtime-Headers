
@interface IMAssistantAccountDefaultDataSource : NSObject <IMAssistantAccountDataSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (id)countryCode;
- (bool)hasMessagingAccount;
- (id)imHandleWithID:(id)arg1;

@end
