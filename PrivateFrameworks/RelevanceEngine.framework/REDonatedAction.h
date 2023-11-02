
@interface REDonatedAction : NSObject <NSCopying, NSSecureCoding> {
    <REDonatedActionIdentifierProviding> * _actionTypeIdentifier;
    NSString * _activityType;
    NSString * _appLevelIdentifier;
    NSDate * _creationDate;
    REIdentifier * _donationIdentifier;
    _DKEvent * _event;
    NSString * _eventLevelIdentifier;
    unsigned long long  _filteredShortcutType;
    NSString * _intentTypeName;
    bool  _isIntentBacked;
    bool  _localDonation;
    NSDate * _localSaveDate;
    NSArray * _relevanceProviders;
    unsigned long long  _relevanceProvidersHash;
    <REDonatedActionIdentifierProviding> * _simplifiedActionTypeIdentifier;
    unsigned long long  _type;
}

@property (nonatomic, readonly) <REDonatedActionIdentifierProviding> *actionTypeIdentifier;
@property (nonatomic, readonly) NSString *activityType;
@property (nonatomic, readonly) NSString *appLevelIdentifier;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) REIdentifier *donationIdentifier;
@property (nonatomic, retain) _DKEvent *event;
@property (nonatomic, readonly) NSString *eventLevelIdentifier;
@property (nonatomic, readonly) unsigned long long filteredShortcutType;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *intentTypeName;
@property (nonatomic, readonly) NSString *localBundleIdentifier;
@property (getter=isLocalDonation, nonatomic, readonly) bool localDonation;
@property (nonatomic, readonly) NSDate *localSaveDate;
@property (nonatomic, readonly) NSArray *relevanceProviders;
@property (nonatomic, readonly) unsigned long long relevanceProvidersHash;
@property (nonatomic, readonly) NSString *remoteBundleIdentifier;
@property (nonatomic, readonly) <REDonatedActionIdentifierProviding> *simplifiedActionTypeIdentifier;
@property (nonatomic, readonly) unsigned long long trainingActionIdentifier;
@property (nonatomic, readonly) unsigned long long type;

+ (id)bundleIdForExtensionId:(id)arg1;
+ (bool)supportedActivityType:(id)arg1 forBundleID:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)_hashRelevanceProviders:(id)arg1;
- (id)_initInteractionWithEvent:(id)arg1 filtered:(bool)arg2;
- (id)_initRelevantShortcutWithEvent:(id)arg1 filtered:(bool)arg2;
- (id)_initUserActivityWithEvent:(id)arg1 filtered:(bool)arg2;
- (void)_loadDuetEvent:(id /* block */)arg1;
- (void)_loadShortcutIdentifiersFromIntent:(id)arg1;
- (void)_loadShortcutIdentifiersFromUserActivity:(id)arg1;
- (id)_shortcutFilter;
- (id)actionTypeIdentifier;
- (id)activityType;
- (id)appLevelIdentifier;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)description;
- (id)donationIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)event;
- (id)eventLevelIdentifier;
- (unsigned long long)filteredShortcutType;
- (id)generateMetrics;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithEvent:(id)arg1 filtered:(bool)arg2;
- (id)intentTypeName;
- (bool)isEqual:(id)arg1;
- (bool)isLocalDonation;
- (void)loadIntent:(id /* block */)arg1;
- (void)loadRelevantShortcut:(id /* block */)arg1;
- (void)loadUserActivity:(id /* block */)arg1;
- (id)localBundleIdentifier;
- (id)localSaveDate;
- (id)relevanceProviders;
- (unsigned long long)relevanceProvidersHash;
- (id)remoteBundleIdentifier;
- (void)setEvent:(id)arg1;
- (id)simplifiedActionTypeIdentifier;
- (unsigned long long)trainingActionIdentifier;
- (unsigned long long)type;

@end
