
@interface TRINamespaceOptionalParams : NSObject <NSCopying> {
    TRIAppContainer * _appContainer;
    bool  _availableToRootUser;
    int  _cloudKitContainerId;
    bool  _enableFetchDuringSetupAssistant;
    bool  _expensiveNetworkingAllowed;
    NSURL * _factorsURL;
    int  _purgeabilityLevel;
    NSString * _resourceAttributionIdentifier;
    NSSet * _upgradeNCVs;
}

@property (nonatomic, copy) TRIAppContainer *appContainer;
@property (nonatomic) bool availableToRootUser;
@property (nonatomic) int cloudKitContainerId;
@property (nonatomic) bool enableFetchDuringSetupAssistant;
@property (nonatomic) bool expensiveNetworkingAllowed;
@property (nonatomic, copy) NSURL *factorsURL;
@property (nonatomic) int purgeabilityLevel;
@property (nonatomic, copy) NSString *resourceAttributionIdentifier;
@property (nonatomic, copy) NSSet *upgradeNCVs;

- (void).cxx_destruct;
- (id)appContainer;
- (bool)availableToRootUser;
- (int)cloudKitContainerId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)enableFetchDuringSetupAssistant;
- (bool)expensiveNetworkingAllowed;
- (id)factorsURL;
- (id)init;
- (int)purgeabilityLevel;
- (id)resourceAttributionIdentifier;
- (void)setAppContainer:(id)arg1;
- (void)setAvailableToRootUser:(bool)arg1;
- (void)setCloudKitContainerId:(int)arg1;
- (void)setEnableFetchDuringSetupAssistant:(bool)arg1;
- (void)setExpensiveNetworkingAllowed:(bool)arg1;
- (void)setFactorsURL:(id)arg1;
- (void)setPurgeabilityLevel:(int)arg1;
- (void)setResourceAttributionIdentifier:(id)arg1;
- (void)setUpgradeNCVs:(id)arg1;
- (id)upgradeNCVs;

@end
