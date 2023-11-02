
@interface ContextualActionPredictionsDataContextualActionEvent : PBCodable <NSCopying> {
    NSString * _actionIdentifier;
    NSString * _actionName;
    NSMutableArray * _commonFileFeatures;
    ContextualActionPredictionsDataContextFeatures * _contextFeatures;
    NSMutableArray * _photoFeatures;
    NSMutableArray * _previousActionIdentifiers;
    NSString * _sessionId;
    NSString * _sourceAppBundleID;
}

@property (nonatomic, retain) NSString *actionIdentifier;
@property (nonatomic, retain) NSString *actionName;
@property (nonatomic, retain) NSMutableArray *commonFileFeatures;
@property (nonatomic, retain) ContextualActionPredictionsDataContextFeatures *contextFeatures;
@property (nonatomic, readonly) bool hasContextFeatures;
@property (nonatomic, readonly) bool hasSessionId;
@property (nonatomic, readonly) bool hasSourceAppBundleID;
@property (nonatomic, retain) NSMutableArray *photoFeatures;
@property (nonatomic, retain) NSMutableArray *previousActionIdentifiers;
@property (nonatomic, retain) NSString *sessionId;
@property (nonatomic, retain) NSString *sourceAppBundleID;

+ (Class)commonFileFeaturesType;
+ (Class)photoFeaturesType;
+ (Class)previousActionIdentifiersType;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)actionName;
- (void)addCommonFileFeatures:(id)arg1;
- (void)addPhotoFeatures:(id)arg1;
- (void)addPreviousActionIdentifiers:(id)arg1;
- (void)clearCommonFileFeatures;
- (void)clearPhotoFeatures;
- (void)clearPreviousActionIdentifiers;
- (id)commonFileFeatures;
- (id)commonFileFeaturesAtIndex:(unsigned long long)arg1;
- (unsigned long long)commonFileFeaturesCount;
- (id)contextFeatures;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContextFeatures;
- (bool)hasSessionId;
- (bool)hasSourceAppBundleID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)photoFeatures;
- (id)photoFeaturesAtIndex:(unsigned long long)arg1;
- (unsigned long long)photoFeaturesCount;
- (id)previousActionIdentifiers;
- (id)previousActionIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)previousActionIdentifiersCount;
- (bool)readFrom:(id)arg1;
- (id)sessionId;
- (void)setActionIdentifier:(id)arg1;
- (void)setActionName:(id)arg1;
- (void)setCommonFileFeatures:(id)arg1;
- (void)setContextFeatures:(id)arg1;
- (void)setPhotoFeatures:(id)arg1;
- (void)setPreviousActionIdentifiers:(id)arg1;
- (void)setSessionId:(id)arg1;
- (void)setSourceAppBundleID:(id)arg1;
- (id)sourceAppBundleID;
- (void)writeTo:(id)arg1;

@end
