
@interface STUIStatusBarVPNItem : STUIStatusBarItem {
    STUIStatusBarStringView * _vpnView;
}

@property (nonatomic, retain) STUIStatusBarStringView *vpnView;

- (void).cxx_destruct;
- (void)_create_vpnView;
- (id)dependentEntryKeys;
- (void)setVpnView:(id)arg1;
- (id)viewForIdentifier:(id)arg1;
- (id)vpnView;

@end
