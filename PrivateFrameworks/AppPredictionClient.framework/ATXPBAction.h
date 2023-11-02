
@interface ATXPBAction : PBCodable <NSCopying> {
    long long  _actionType;
    NSString * _activityString;
    NSString * _bundleId;
    unsigned long long  _cachedHash;
    NSData * _contentAttributeSet;
    ATXPBActionCriteria * _criteria;
    struct { 
        unsigned int actionType : 1; 
        unsigned int cachedHash : 1; 
        unsigned int userActivityHash : 1; 
        unsigned int isFutureMedia : 1; 
    }  _has;
    NSString * _heuristic;
    NSMutableArray * _heuristicMetadatas;
    NSData * _intent;
    bool  _isFutureMedia;
    NSString * _itemIdentifier;
    NSString * _languageCode;
    ATXPBAVRouteInfo * _routeInfo;
    NSString * _subtitle;
    NSString * _title;
    long long  _userActivityHash;
    NSData * _userActivityProxy;
    NSString * _uuid;
}

@property (nonatomic) long long actionType;
@property (nonatomic, retain) NSString *activityString;
@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic) unsigned long long cachedHash;
@property (nonatomic, retain) NSData *contentAttributeSet;
@property (nonatomic, retain) ATXPBActionCriteria *criteria;
@property (nonatomic) bool hasActionType;
@property (nonatomic, readonly) bool hasActivityString;
@property (nonatomic, readonly) bool hasBundleId;
@property (nonatomic) bool hasCachedHash;
@property (nonatomic, readonly) bool hasContentAttributeSet;
@property (nonatomic, readonly) bool hasCriteria;
@property (nonatomic, readonly) bool hasHeuristic;
@property (nonatomic, readonly) bool hasIntent;
@property (nonatomic) bool hasIsFutureMedia;
@property (nonatomic, readonly) bool hasItemIdentifier;
@property (nonatomic, readonly) bool hasLanguageCode;
@property (nonatomic, readonly) bool hasRouteInfo;
@property (nonatomic, readonly) bool hasSubtitle;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic) bool hasUserActivityHash;
@property (nonatomic, readonly) bool hasUserActivityProxy;
@property (nonatomic, readonly) bool hasUuid;
@property (nonatomic, retain) NSString *heuristic;
@property (nonatomic, retain) NSMutableArray *heuristicMetadatas;
@property (nonatomic, retain) NSData *intent;
@property (nonatomic) bool isFutureMedia;
@property (nonatomic, retain) NSString *itemIdentifier;
@property (nonatomic, retain) NSString *languageCode;
@property (nonatomic, retain) ATXPBAVRouteInfo *routeInfo;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) NSString *title;
@property (nonatomic) long long userActivityHash;
@property (nonatomic, retain) NSData *userActivityProxy;
@property (nonatomic, retain) NSString *uuid;

+ (Class)heuristicMetadataType;

- (void).cxx_destruct;
- (long long)actionType;
- (id)activityString;
- (void)addHeuristicMetadata:(id)arg1;
- (id)bundleId;
- (unsigned long long)cachedHash;
- (void)clearHeuristicMetadatas;
- (id)contentAttributeSet;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)criteria;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActionType;
- (bool)hasActivityString;
- (bool)hasBundleId;
- (bool)hasCachedHash;
- (bool)hasContentAttributeSet;
- (bool)hasCriteria;
- (bool)hasHeuristic;
- (bool)hasIntent;
- (bool)hasIsFutureMedia;
- (bool)hasItemIdentifier;
- (bool)hasLanguageCode;
- (bool)hasRouteInfo;
- (bool)hasSubtitle;
- (bool)hasTitle;
- (bool)hasUserActivityHash;
- (bool)hasUserActivityProxy;
- (bool)hasUuid;
- (unsigned long long)hash;
- (id)heuristic;
- (id)heuristicMetadataAtIndex:(unsigned long long)arg1;
- (id)heuristicMetadatas;
- (unsigned long long)heuristicMetadatasCount;
- (id)intent;
- (bool)isEqual:(id)arg1;
- (bool)isFutureMedia;
- (id)itemIdentifier;
- (id)languageCode;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)routeInfo;
- (void)setActionType:(long long)arg1;
- (void)setActivityString:(id)arg1;
- (void)setBundleId:(id)arg1;
- (void)setCachedHash:(unsigned long long)arg1;
- (void)setContentAttributeSet:(id)arg1;
- (void)setCriteria:(id)arg1;
- (void)setHasActionType:(bool)arg1;
- (void)setHasCachedHash:(bool)arg1;
- (void)setHasIsFutureMedia:(bool)arg1;
- (void)setHasUserActivityHash:(bool)arg1;
- (void)setHeuristic:(id)arg1;
- (void)setHeuristicMetadatas:(id)arg1;
- (void)setIntent:(id)arg1;
- (void)setIsFutureMedia:(bool)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setRouteInfo:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserActivityHash:(long long)arg1;
- (void)setUserActivityProxy:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)subtitle;
- (id)title;
- (long long)userActivityHash;
- (id)userActivityProxy;
- (id)uuid;
- (void)writeTo:(id)arg1;

@end