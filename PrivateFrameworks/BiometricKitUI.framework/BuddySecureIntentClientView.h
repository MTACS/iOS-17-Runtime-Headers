
@interface BuddySecureIntentClientView : UIView <SecureIntentClientView> {
    BKMesaSecureIntentProvider * _secureIntentProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BKMesaSecureIntentProvider *secureIntentProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)secureIntentProvider;
- (void)setSecureIntentProvider:(id)arg1;

@end
