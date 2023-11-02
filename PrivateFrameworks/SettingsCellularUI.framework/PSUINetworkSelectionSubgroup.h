
@interface PSUINetworkSelectionSubgroup : NSObject <CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientSubscriberDelegate, PSSpecifierGroup> {
    NSMutableArray * _bundleControllers;
    CoreTelephonyClient * _ctClient;
    PSListController * _listController;
    PSSpecifier * _parentSpecifier;
}

@property (nonatomic, retain) NSMutableArray *bundleControllers;
@property (nonatomic, retain) CoreTelephonyClient *ctClient;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) PSListController *listController;
@property (nonatomic) PSSpecifier *parentSpecifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)bundleControllers;
- (id)ctClient;
- (id)getLogger;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 parentSpecifier:(id)arg3;
- (id)listController;
- (id)localizedCellularNetworkName:(id)arg1;
- (void)networkSelected:(id)arg1 success:(bool)arg2 mode:(id)arg3;
- (void)operatorNameChanged:(id)arg1 name:(id)arg2;
- (id)parentSpecifier;
- (void)reloadCellularNetworkSpecifier;
- (void)setBundleControllers:(id)arg1;
- (void)setCtClient:(id)arg1;
- (void)setListController:(id)arg1;
- (void)setParentSpecifier:(id)arg1;
- (id)specifiers;
- (void)willEnterForeground;

@end
