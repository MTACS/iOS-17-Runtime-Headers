
@interface PSUICallingSubgroup : NSObject <PSSpecifierGroup> {
    PSListController * _listController;
    PSSpecifier * _parentSpecifier;
    bool  _supportsWiFiCalling;
    NSArray * _wifiCallingSpecifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) PSListController *listController;
@property (nonatomic) PSSpecifier *parentSpecifier;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *wifiCallingSpecifiers;

- (void).cxx_destruct;
- (id)getLogger;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 parentSpecifier:(id)arg3;
- (id)listController;
- (id)parentSpecifier;
- (void)setListController:(id)arg1;
- (void)setParentSpecifier:(id)arg1;
- (void)setWifiCallingSpecifiers:(id)arg1;
- (id)specifiers;
- (void)viewWillAppear;
- (id)wifiCallingSpecifiers;

@end
