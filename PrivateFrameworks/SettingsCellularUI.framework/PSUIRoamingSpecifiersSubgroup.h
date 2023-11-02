
@interface PSUIRoamingSpecifiersSubgroup : NSObject <PSSpecifierGroup> {
    PSUICoreTelephonyDataCache * _dataCache;
    PSListController * _listController;
    CTServiceDescriptor * _serviceDescriptor;
}

@property (nonatomic) PSUICoreTelephonyDataCache *dataCache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) PSListController *listController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dataCache;
- (id)getDataRoamingStatus:(id)arg1;
- (id)getLogger;
- (id)initWithListController:(id)arg1 dataCache:(id)arg2 serviceDescriptor:(id)arg3;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;
- (id)listController;
- (void)roamingOptionsDidChange;
- (void)setDataCache:(id)arg1;
- (void)setDataRoamingEnabled:(id)arg1 specifier:(id)arg2;
- (void)setListController:(id)arg1;
- (id)specifiers;

@end
