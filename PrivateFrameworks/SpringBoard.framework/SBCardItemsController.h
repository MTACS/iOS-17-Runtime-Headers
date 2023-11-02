
@interface SBCardItemsController : NSObject <NSXPCListenerDelegate, SBCardItemsControllerRemoteInterface> {
    NSMutableDictionary * _cardItems;
    bool  _cardWhileLockedAllowed;
    NSMutableArray * _connections;
    NSXPCListener * _listener;
    MCProfileConnection * _profileConnection;
    SBWalletNotificationSource * _walletNotificationSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) SBWalletNotificationSource *walletNotificationSource;

- (void).cxx_destruct;
- (void)_activateCardItem:(id)arg1 animated:(bool)arg2;
- (void)_deactivateCardItem:(id)arg1;
- (void)_updateCardItem:(id)arg1;
- (void)_updateRestrictions;
- (void)_updateThumbnailForCardItem:(id)arg1 withSnapshotter:(id)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (void)getCardItemsForControllerWithIdentifier:(id)arg1 withHandler:(id /* block */)arg2;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)setCardItems:(id)arg1 forControllerWithIdentifier:(id)arg2;
- (void)setWalletNotificationSource:(id)arg1;
- (id)walletNotificationSource;

@end
