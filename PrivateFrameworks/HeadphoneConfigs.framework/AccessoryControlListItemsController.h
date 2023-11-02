
@interface AccessoryControlListItemsController : PSListItemsController {
    bool  _autoANCSupported;
    BluetoothDevice * _currentDevice;
    NSString * _currentSelectedSpecifier;
    struct { 
        bool normal; 
        bool anc; 
        bool transparency; 
        bool autoANC; 
    }  _listeningModeConfigs;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)listItemSelected:(id)arg1;
- (id)listeningModeCombinations;
- (id)specifiers;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;

@end
