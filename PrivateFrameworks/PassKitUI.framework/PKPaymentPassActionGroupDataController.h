
@interface PKPaymentPassActionGroupDataController : NSObject <PKRemoteActionGroupViewControllerDelegate, PKSelectActionGroupViewControllerDelegate> {
    NSArray * _actionGroups;
    PKPaymentPass * _pass;
    <PKPaymentDataProvider> * _paymentDataProvider;
    PKPaymentWebService * _webService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIViewController *viewController;

- (void).cxx_destruct;
- (id)initWithPass:(id)arg1 actionGroups:(id)arg2 paymentDataProvider:(id)arg3 webService:(id)arg4;
- (void)remoteGroupActionsViewControllerDidCancel:(id)arg1;
- (void)remoteGroupActionsViewControllerDidPerformFetchActionGroup:(id)arg1;
- (void)selectActionGroupViewControllerDidCancel:(id)arg1;
- (void)selectActionGroupViewControllerDidPerformFetchActionGroup:(id)arg1;
- (id)viewController;

@end
