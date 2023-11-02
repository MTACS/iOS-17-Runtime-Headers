
@interface EMAccountAuthentication : NSObject {
    <EDAccountFactory> * _accountFactory;
}

@property (nonatomic, readonly) <EDAccountFactory> *accountFactory;

+ (id)log;

- (void).cxx_destruct;
- (bool)_hostnamesHaveSameTopLevelDomain:(id)arg1 deliveryAccount:(id)arg2;
- (bool)_shouldAutoUpdateDeliveryAccount:(id)arg1 forChangedReceivingAccount:(id)arg2;
- (bool)_updateDeliveryAccountCredentialIfNecessaryForAccountWithAccount:(id)arg1;
- (bool)_updateDeliveryAccountCredentialIfNecessaryForReceivingAccount:(id)arg1;
- (id)accountFactory;
- (id)initWithAccountFactory:(id)arg1;
- (bool)updateDeliveryAccountCredentialIfNecessaryForAccountWithIdentifier:(id)arg1;
- (bool)updateDeliveryAccountCredentialIfNecessaryForAccountWithSystemAccount:(id)arg1;

@end
