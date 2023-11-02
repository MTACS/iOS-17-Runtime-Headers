
@protocol IMAssistantAccountDataSource <NSObject>

@required

- (NSString *)countryCode;
- (bool)hasMessagingAccount;
- (IMHandle *)imHandleWithID:(NSString *)arg1;

@end
