
@interface ATXAnchorModelPBAnchorModelLogEntry : PBCodable <NSCopying> {
    ATXAnchorModelPBAnchorMetadata * _anchor;
    NSMutableArray * _negativeActions;
    NSMutableArray * _negativeAppLaunches;
    NSMutableArray * _positiveActions;
    NSMutableArray * _positiveAppLaunches;
    NSString * _userId;
}

@property (nonatomic, retain) ATXAnchorModelPBAnchorMetadata *anchor;
@property (nonatomic, readonly) bool hasAnchor;
@property (nonatomic, readonly) bool hasUserId;
@property (nonatomic, retain) NSMutableArray *negativeActions;
@property (nonatomic, retain) NSMutableArray *negativeAppLaunches;
@property (nonatomic, retain) NSMutableArray *positiveActions;
@property (nonatomic, retain) NSMutableArray *positiveAppLaunches;
@property (nonatomic, retain) NSString *userId;

+ (Class)negativeActionsType;
+ (Class)negativeAppLaunchesType;
+ (Class)positiveActionsType;
+ (Class)positiveAppLaunchesType;

- (void).cxx_destruct;
- (void)addNegativeActions:(id)arg1;
- (void)addNegativeAppLaunches:(id)arg1;
- (void)addPositiveActions:(id)arg1;
- (void)addPositiveAppLaunches:(id)arg1;
- (id)anchor;
- (void)clearNegativeActions;
- (void)clearNegativeAppLaunches;
- (void)clearPositiveActions;
- (void)clearPositiveAppLaunches;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAnchor;
- (bool)hasUserId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)negativeActions;
- (id)negativeActionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)negativeActionsCount;
- (id)negativeAppLaunches;
- (id)negativeAppLaunchesAtIndex:(unsigned long long)arg1;
- (unsigned long long)negativeAppLaunchesCount;
- (id)positiveActions;
- (id)positiveActionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)positiveActionsCount;
- (id)positiveAppLaunches;
- (id)positiveAppLaunchesAtIndex:(unsigned long long)arg1;
- (unsigned long long)positiveAppLaunchesCount;
- (bool)readFrom:(id)arg1;
- (void)setAnchor:(id)arg1;
- (void)setNegativeActions:(id)arg1;
- (void)setNegativeAppLaunches:(id)arg1;
- (void)setPositiveActions:(id)arg1;
- (void)setPositiveAppLaunches:(id)arg1;
- (void)setUserId:(id)arg1;
- (id)userId;
- (void)writeTo:(id)arg1;

@end
