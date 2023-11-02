
@interface PSUIDataModeSubgroup : NSObject <PSSpecifierGroup> {
    CTXPCServiceSubscriptionContext * _context;
    PSUICoreTelephonyDataCache * _dataCache;
    PSUIDataModeSpecifier * _dataModeSpecifier;
    PSListController * _hostController;
    PSSpecifier * _parentSpecifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool shouldShowLinkCell;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithHostController:(id)arg1 parentSpecifier:(id)arg2 dataCache:(id)arg3 context:(id)arg4 ctClient:(id)arg5;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;
- (bool)shouldShowLinkCell;
- (id)specifiers;

@end
