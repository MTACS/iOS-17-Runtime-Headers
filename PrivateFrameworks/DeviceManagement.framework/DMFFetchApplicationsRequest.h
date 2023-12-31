
@interface DMFFetchApplicationsRequest : DMFTaskRequest {
    NSArray * _bundleIdentifiers;
    bool  _deleteFeedback;
    bool  _excludeIcon;
    bool  _excludeUnmanagedApps;
    unsigned long long  _stateFilter;
    unsigned long long  _typeFilter;
}

@property (nonatomic, copy) NSArray *bundleIdentifiers;
@property (nonatomic) bool deleteFeedback;
@property (nonatomic) bool excludeIcon;
@property (nonatomic) bool excludeUnmanagedApps;
@property (nonatomic) unsigned long long stateFilter;
@property (nonatomic) unsigned long long typeFilter;

+ (Class)allowlistedClassForResultObject;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifiers;
- (bool)deleteFeedback;
- (void)encodeWithCoder:(id)arg1;
- (bool)excludeIcon;
- (bool)excludeUnmanagedApps;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setBundleIdentifiers:(id)arg1;
- (void)setDeleteFeedback:(bool)arg1;
- (void)setExcludeIcon:(bool)arg1;
- (void)setExcludeUnmanagedApps:(bool)arg1;
- (void)setStateFilter:(unsigned long long)arg1;
- (void)setTypeFilter:(unsigned long long)arg1;
- (unsigned long long)stateFilter;
- (unsigned long long)typeFilter;

@end
