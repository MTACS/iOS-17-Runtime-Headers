
@interface TPSPhonebookTelephonyController : TPSTelephonyController <CoreTelephonyClientSuppServicesDelegate> {
    long long  _phoneBookEntryCount;
    CTPhoneNumberInfo * _phoneNumberInfo;
    CTXPCServiceSubscriptionContext * _subscriptionContext;
    NSString * _updatePhoneNumber;
    id /* block */  _updatePhoneNumberInfoCompletion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long phoneBookEntryCount;
@property (nonatomic, retain) CTPhoneNumberInfo *phoneNumberInfo;
@property (nonatomic, readonly) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *updatePhoneNumber;
@property (nonatomic, copy) id /* block */ updatePhoneNumberInfoCompletion;

- (void).cxx_destruct;
- (void)fetchPhoneNumberInfo;
- (void)fetchPhoneNumberInfoWithCompletion:(id /* block */)arg1;
- (id)getPhoneNumberInfo;
- (id)getPhoneNumberInfoWithError:(id*)arg1;
- (id)init;
- (id)initWithSubscriptionContext:(id)arg1;
- (long long)phoneBookEntryCount;
- (void)phoneBookSelected:(id)arg1;
- (void)phoneNumberChanged:(id)arg1;
- (id)phoneNumberInfo;
- (void)savePhoneBookEntryAtIndex:(int)arg1 withContactName:(id)arg2 contactNumber:(id)arg3;
- (void)savePhoneBookEntryAtIndex:(int)arg1 withContactName:(id)arg2 contactNumber:(id)arg3 completion:(id /* block */)arg4;
- (void)selectPhoneBookWithName:(int)arg1 password:(id)arg2 completion:(id /* block */)arg3;
- (void)setPhoneBookEntryCount:(long long)arg1;
- (void)setPhoneNumberInfo:(id)arg1;
- (void)setUpdatePhoneNumber:(id)arg1;
- (void)setUpdatePhoneNumberInfoCompletion:(id /* block */)arg1;
- (id)subscriptionContext;
- (id)updatePhoneNumber;
- (void)updatePhoneNumberInfo:(id)arg1 label:(id)arg2 number:(id)arg3 completion:(id /* block */)arg4;
- (id /* block */)updatePhoneNumberInfoCompletion;

@end
