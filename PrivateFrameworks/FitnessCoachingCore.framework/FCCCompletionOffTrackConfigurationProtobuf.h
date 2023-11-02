
@interface FCCCompletionOffTrackConfigurationProtobuf : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _allowedGoalTypes;
    NSMutableArray * _coalescingRules;
    double  _goalBufferPercentage;
    struct { 
        unsigned int goalBufferPercentage : 1; 
    }  _has;
    NSString * _identifier;
    FCCPercentageOfDayRuleProtobuf * _percentageOfDayRule;
}

@property (nonatomic, readonly) int*allowedGoalTypes;
@property (nonatomic, readonly) unsigned long long allowedGoalTypesCount;
@property (nonatomic, retain) NSMutableArray *coalescingRules;
@property (nonatomic) double goalBufferPercentage;
@property (nonatomic) bool hasGoalBufferPercentage;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasPercentageOfDayRule;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) FCCPercentageOfDayRuleProtobuf *percentageOfDayRule;

+ (Class)coalescingRulesType;

- (void).cxx_destruct;
- (void)addAllowedGoalTypes:(int)arg1;
- (void)addCoalescingRules:(id)arg1;
- (int*)allowedGoalTypes;
- (int)allowedGoalTypesAtIndex:(unsigned long long)arg1;
- (unsigned long long)allowedGoalTypesCount;
- (void)clearAllowedGoalTypes;
- (void)clearCoalescingRules;
- (id)coalescingRules;
- (id)coalescingRulesAtIndex:(unsigned long long)arg1;
- (unsigned long long)coalescingRulesCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (double)goalBufferPercentage;
- (bool)hasGoalBufferPercentage;
- (bool)hasIdentifier;
- (bool)hasPercentageOfDayRule;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)percentageOfDayRule;
- (bool)readFrom:(id)arg1;
- (void)setAllowedGoalTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setCoalescingRules:(id)arg1;
- (void)setGoalBufferPercentage:(double)arg1;
- (void)setHasGoalBufferPercentage:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPercentageOfDayRule:(id)arg1;
- (void)writeTo:(id)arg1;

@end
