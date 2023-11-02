
@interface SBUserAlertNotificationSource : NSObject <NCNotificationSource, SBAlertItemPresenter, SBAlertItemsControllerObserver> {
    NCNotificationDispatcher * _dispatcher;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NCNotificationDispatcher *dispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)alertItemsController:(id)arg1 didActivateAlertItem:(id)arg2;
- (void)alertItemsController:(id)arg1 didDeactivateAlertItem:(id)arg2 forReason:(int)arg3;
- (void)alertItemsController:(id)arg1 willActivateAlertItem:(id)arg2;
- (bool)canPresentMultipleAlertItemsSimultaneously;
- (void)dealloc;
- (void)dismissAlertItem:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)dispatcher;
- (id)initWithDispatcher:(id)arg1;
- (void)presentAlertItem:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (bool)presentsAlertItemsModally;
- (void)setDispatcher:(id)arg1;

@end
