
@interface PKSecureElementPassContactIssuerHelper : NSObject <MFMailComposeViewControllerDelegate> {
    <PKSecureElementPassContactIssuerHelperDelegate> * _delegate;
    unsigned long long  _featureIdentifier;
    bool  _isAppleAccess;
    id /* block */  _openBusinessChatHandler;
    PKSecureElementPass * _pass;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKSecureElementPassContactIssuerHelperDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long featureIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ openBusinessChatHandler;
@property (nonatomic, copy) PKSecureElementPass *pass;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)callIssuer;
- (id)delegate;
- (void)emailIssuer;
- (unsigned long long)featureIdentifier;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (id /* block */)openBusinessChatHandler;
- (void)openIssuerWebsite;
- (id)pass;
- (void)presentContactViewController:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFeatureIdentifier:(unsigned long long)arg1;
- (void)setOpenBusinessChatHandler:(id /* block */)arg1;
- (void)setPass:(id)arg1;

@end
