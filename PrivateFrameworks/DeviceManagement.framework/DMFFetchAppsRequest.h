
@interface DMFFetchAppsRequest : DMFTaskRequest {
    bool  _advanceTransientStates;
    NSArray * _bundleIdentifiers;
    bool  _deleteFeedback;
    bool  _managedAppsOnly;
    NSURL * _manifestURL;
    NSArray * _propertyKeys;
    NSNumber * _storeItemIdentifier;
    unsigned long long  _type;
}

@property (nonatomic) bool advanceTransientStates;
@property (nonatomic, copy) NSArray *bundleIdentifiers;
@property (nonatomic) bool deleteFeedback;
@property (nonatomic) bool managedAppsOnly;
@property (nonatomic, copy) NSURL *manifestURL;
@property (nonatomic, copy) NSArray *propertyKeys;
@property (nonatomic, copy) NSNumber *storeItemIdentifier;
@property (nonatomic) unsigned long long type;

+ (Class)allowlistedClassForResultObject;
+ (bool)isPermittedOnSystemConnection;
+ (bool)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)advanceTransientStates;
- (id)bundleIdentifiers;
- (bool)deleteFeedback;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)managedAppsOnly;
- (id)manifestURL;
- (id)propertyKeys;
- (void)setAdvanceTransientStates:(bool)arg1;
- (void)setBundleIdentifiers:(id)arg1;
- (void)setDeleteFeedback:(bool)arg1;
- (void)setManagedAppsOnly:(bool)arg1;
- (void)setManifestURL:(id)arg1;
- (void)setPropertyKeys:(id)arg1;
- (void)setStoreItemIdentifier:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (id)storeItemIdentifier;
- (unsigned long long)type;

@end
