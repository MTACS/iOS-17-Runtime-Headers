
@interface STUIStatusBarVPNDisconnectItem : STUIStatusBarItem {
    STUIStatusBarVPNDisconnectView * _disconnectView;
    NSTimer * _slashBeginTimer;
}

@property (nonatomic, retain) STUIStatusBarVPNDisconnectView *disconnectView;
@property (nonatomic, retain) NSTimer *slashBeginTimer;

- (void).cxx_destruct;
- (void)_create_disconnectView;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (bool)canEnableDisplayItem:(id)arg1 fromData:(id)arg2;
- (id)dependentEntryKeys;
- (id)disconnectView;
- (void)setDisconnectView:(id)arg1;
- (void)setSlashBeginTimer:(id)arg1;
- (id)slashBeginTimer;
- (id)viewForIdentifier:(id)arg1;

@end
