
@interface HMDServiceTransaction : HMDBackingStoreModelObject {
    NSObject<OS_dispatch_group> * _configurationTracker;
    NSString * _lastSeenConfiguredNameLocal;
}

@property (nonatomic, retain) NSString *associatedServiceType;
@property (nonatomic, retain) NSArray *characteristics;
@property (nonatomic, retain) NSNumber *configurationState;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *configurationTracker;
@property (nonatomic, retain) NSString *expectedConfiguredName;
@property (nonatomic, retain) NSNumber *hidden;
@property (nonatomic, retain) NSNumber *instanceID;
@property (nonatomic, retain) NSNumber *labelIndex;
@property (nonatomic, retain) NSNumber *labelNamespace;
@property (nonatomic, retain) NSNumber *lastKnownDiscoveryMode;
@property (nonatomic, retain) NSNumber *lastKnownOperatingState;
@property (nonatomic, retain) NSNumber *lastKnownOperatingStateAbnormalReasons;
@property (nonatomic, retain) NSString *lastSeenConfiguredNameLocal;
@property (nonatomic, retain) NSArray *linkedServices;
@property (nonatomic, retain) NSArray *mediaSourceDisplayOrder;
@property (nonatomic, retain) NSNumber *mediaSourceIdentifier;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSNumber *primary;
@property (nonatomic, retain) NSString *providedName;
@property (nonatomic, retain) NSNumber *serviceProperties;
@property (nonatomic, retain) NSString *serviceSubtype;
@property (nonatomic, retain) NSString *serviceType;

+ (id)properties;

- (void).cxx_destruct;
- (id)configurationTracker;
- (id)lastSeenConfiguredNameLocal;
- (void)setConfigurationTracker:(id)arg1;
- (void)setLastSeenConfiguredNameLocal:(id)arg1;

@end
