
@interface PKPeerPaymentMessagesContentBaseViewController : UIViewController <PKPeerPaymentMessagesContentProtocol> {
    PKPeerPaymentMessagesAppViewController * _appController;
    PKPeerPaymentMessagesContentView * _contentView;
}

@property (nonatomic, readonly) PKPeerPaymentMessagesAppViewController *appController;
@property (nonatomic, readonly) PKPeerPaymentMessagesContentView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)appController;
- (id)contentView;
- (id)initWithMessagesAppController:(id)arg1;
- (void)loadView;
- (void)reloadContent;
- (void)viewWillAppear:(bool)arg1;

@end
