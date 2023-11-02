
@interface BMAppActivity : BMEventBase <BMStoreData> {
    NSString * _activityType;
    bool  _beginningOfActivity;
    NSString * _bundleID;
    NSString * _contentDescription;
    bool  _hasBeginningOfActivity;
    bool  _hasIsEligibleForPrediction;
    bool  _hasIsPubliclyIndexable;
    bool  _hasRaw_expirationDate;
    bool  _hasShortcutAvailability;
    bool  _isEligibleForPrediction;
    bool  _isPubliclyIndexable;
    NSString * _itemIdentifier;
    NSString * _itemRelatedContentURL;
    NSString * _itemRelatedUniqueIdentifier;
    double  _raw_expirationDate;
    int  _shortcutAvailability;
    NSString * _suggestedInvocationPhrase;
    NSString * _title;
    NSString * _userActivityRequiredString;
    NSString * _userActivityUUID;
}

@property (nonatomic, readonly) NSString *activityType;
@property (nonatomic, readonly) bool beginningOfActivity;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSString *contentDescription;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic) bool hasBeginningOfActivity;
@property (nonatomic) bool hasIsEligibleForPrediction;
@property (nonatomic) bool hasIsPubliclyIndexable;
@property (nonatomic) bool hasShortcutAvailability;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isEligibleForPrediction;
@property (nonatomic, readonly) bool isPubliclyIndexable;
@property (nonatomic, readonly) NSString *itemIdentifier;
@property (nonatomic, readonly) NSString *itemRelatedContentURL;
@property (nonatomic, readonly) NSString *itemRelatedUniqueIdentifier;
@property (nonatomic, readonly) int shortcutAvailability;
@property (nonatomic, readonly) NSString *suggestedInvocationPhrase;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *userActivityRequiredString;
@property (nonatomic, readonly) NSString *userActivityUUID;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)activityType;
- (bool)beginningOfActivity;
- (id)bundleID;
- (id)contentDescription;
- (unsigned int)dataVersion;
- (id)description;
- (id)expirationDate;
- (bool)hasBeginningOfActivity;
- (bool)hasIsEligibleForPrediction;
- (bool)hasIsPubliclyIndexable;
- (bool)hasShortcutAvailability;
- (id)initByReadFrom:(id)arg1;
- (id)initWithBundleID:(id)arg1 activityType:(id)arg2 beginningOfActivity:(id)arg3 contentDescription:(id)arg4 expirationDate:(id)arg5 isEligibleForPrediction:(id)arg6 isPubliclyIndexable:(id)arg7 itemIdentifier:(id)arg8 itemRelatedContentURL:(id)arg9 itemRelatedUniqueIdentifier:(id)arg10 shortcutAvailability:(id)arg11 suggestedInvocationPhrase:(id)arg12 title:(id)arg13 userActivityRequiredString:(id)arg14 userActivityUUID:(id)arg15;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEligibleForPrediction;
- (bool)isEqual:(id)arg1;
- (bool)isPubliclyIndexable;
- (id)itemIdentifier;
- (id)itemRelatedContentURL;
- (id)itemRelatedUniqueIdentifier;
- (id)jsonDictionary;
- (id)serialize;
- (void)setHasBeginningOfActivity:(bool)arg1;
- (void)setHasIsEligibleForPrediction:(bool)arg1;
- (void)setHasIsPubliclyIndexable:(bool)arg1;
- (void)setHasShortcutAvailability:(bool)arg1;
- (int)shortcutAvailability;
- (id)suggestedInvocationPhrase;
- (id)title;
- (id)userActivityRequiredString;
- (id)userActivityUUID;
- (void)writeTo:(id)arg1;

@end
