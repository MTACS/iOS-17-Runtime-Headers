
@interface _MFAccountInformation : NSObject {
    MailAccount * _account;
    DeliveryAccount * _deliveryAccount;
    NSDictionary * _localizedNotes;
}

@property (nonatomic, retain) MailAccount *account;
@property (nonatomic, retain) DeliveryAccount *deliveryAccount;
@property (nonatomic, retain) NSDictionary *localizedNotes;

- (void).cxx_destruct;
- (id)account;
- (id)deliveryAccount;
- (id)localizedNotes;
- (void)setAccount:(id)arg1;
- (void)setDeliveryAccount:(id)arg1;
- (void)setLocalizedNotes:(id)arg1;

@end
