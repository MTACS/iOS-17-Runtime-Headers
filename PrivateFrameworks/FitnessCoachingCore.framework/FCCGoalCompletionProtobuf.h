
@interface FCCGoalCompletionProtobuf : PBCodable <NSCopying> {
    long long  _activitySummaryIndex;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _completedGoalTypes;
    struct { 
        unsigned int activitySummaryIndex : 1; 
    }  _has;
    NSString * _identifier;
}

@property (nonatomic) long long activitySummaryIndex;
@property (nonatomic, readonly) int*completedGoalTypes;
@property (nonatomic, readonly) unsigned long long completedGoalTypesCount;
@property (nonatomic) bool hasActivitySummaryIndex;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, retain) NSString *identifier;

- (void).cxx_destruct;
- (long long)activitySummaryIndex;
- (void)addCompletedGoalTypes:(int)arg1;
- (void)clearCompletedGoalTypes;
- (int*)completedGoalTypes;
- (int)completedGoalTypesAtIndex:(unsigned long long)arg1;
- (unsigned long long)completedGoalTypesCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActivitySummaryIndex;
- (bool)hasIdentifier;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActivitySummaryIndex:(long long)arg1;
- (void)setCompletedGoalTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setHasActivitySummaryIndex:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
