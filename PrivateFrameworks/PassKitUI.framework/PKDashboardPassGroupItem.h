
@interface PKDashboardPassGroupItem : NSObject <PKDashboardItem> {
    PKPassGroupView * _groupView;
    PKPeerPaymentAccount * _peerPaymentAccount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PKPassGroupView *groupView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKPeerPaymentAccount *peerPaymentAccount;
@property (readonly) Class superclass;

+ (id)identifier;

- (void).cxx_destruct;
- (id)groupView;
- (id)initWithGroupView:(id)arg1;
- (id)peerPaymentAccount;
- (void)setPeerPaymentAccount:(id)arg1;

@end
