
@interface TRINamespaceDescriptor : NSObject {
    TRIAppContainer * _appContainer;
    bool  _availableToRootUser;
    int  _cloudKitContainerId;
    unsigned int  _downloadNCV;
    bool  _enableFetchDuringSetupAssistant;
    bool  _expensiveNetworkingAllowed;
    NSURL * _factorsURL;
    NSString * _namespaceName;
    int  _purgeabilityLevel;
    NSString * _resourceAttributionIdentifier;
    NSSet * _upgradeNCVs;
}

@property (nonatomic, readonly) TRIAppContainer *appContainer;
@property (nonatomic, readonly) bool availableToRootUser;
@property (nonatomic, readonly) int cloudKitContainerId;
@property (nonatomic, readonly) unsigned int downloadNCV;
@property (nonatomic, readonly) bool enableFetchDuringSetupAssistant;
@property (nonatomic, readonly) bool expensiveNetworkingAllowed;
@property (nonatomic, readonly) NSURL *factorsURL;
@property (nonatomic, readonly) NSString *namespaceName;
@property (nonatomic, readonly) int purgeabilityLevel;
@property (nonatomic, readonly) NSString *resourceAttributionIdentifier;
@property (nonatomic, readonly) NSSet *upgradeNCVs;

+ (id)descriptorPathForNamespaceName:(id)arg1 fromDirectory:(id)arg2;
+ (id)descriptorsForDirectory:(id)arg1 filterBlock:(id /* block */)arg2;
+ (void)enumerateDescriptorsInDirectory:(id)arg1 block:(id /* block */)arg2;
+ (id)loadFromFile:(id)arg1;
+ (id)loadWithNamespaceName:(id)arg1 fromDirectory:(id)arg2;
+ (bool)removeDescriptorWithNamespaceName:(id)arg1 fromDirectory:(id)arg2;

- (void).cxx_destruct;
- (bool)_isEqualToNamespaceDescriptor:(id)arg1;
- (bool)_upgradeNCVsArePositiveIntegers:(id)arg1;
- (bool)_upgradeNCVsIsValid:(id)arg1;
- (id)appContainer;
- (bool)availableToRootUser;
- (int)cloudKitContainerId;
- (id)dictionary;
- (unsigned int)downloadNCV;
- (bool)enableFetchDuringSetupAssistant;
- (bool)expensiveNetworkingAllowed;
- (id)factorsAbsolutePathAsOwner:(bool)arg1;
- (id)factorsURL;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithNamespaceName:(id)arg1 downloadNCV:(unsigned int)arg2 optionalParams:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)namespaceName;
- (int)purgeabilityLevel;
- (bool)removeFromDirectory:(id)arg1;
- (id)resourceAttributionIdentifier;
- (bool)saveToDirectory:(id)arg1;
- (id)upgradeNCVs;
- (bool)writeToFile:(id)arg1;

@end
