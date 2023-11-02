
@interface FCCAlmostThereConfigurationProtobuf : PBCodable <NSCopying> {
    NSMutableArray * _coalescingRules;
    double  _goalBufferPercentage;
    int  _goalType;
    struct { 
        unsigned int goalBufferPercentage : 1; 
        unsigned int minimumPercentageComplete : 1; 
        unsigned int goalType : 1; 
    }  _has;
    NSString * _identifier;
    double  _minimumPercentageComplete;
    FCCTimeOfDayRuleProtobuf * _timeOfDayRule;
}

@property (nonatomic, retain) NSMutableArray *coalescingRules;
@property (nonatomic) double goalBufferPercentage;
@property (nonatomic) int goalType;
@property (nonatomic) bool hasGoalBufferPercentage;
@property (nonatomic) bool hasGoalType;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic) bool hasMinimumPercentageComplete;
@property (nonatomic, readonly) bool hasTimeOfDayRule;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) double minimumPercentageComplete;
@property (nonatomic, retain) FCCTimeOfDayRuleProtobuf *timeOfDayRule;

+ (Class)coalescingRulesType;

- (void).cxx_destruct;
- (void)addCoalescingRules:(id)arg1;
- (void)clearCoalescingRules;
- (id)coalescingRules;
- (id)coalescingRulesAtIndex:(unsigned long long)arg1;
- (unsigned long long)coalescingRulesCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)goalBufferPercentage;
- (int)goalType;
- (bool)hasGoalBufferPercentage;
- (bool)hasGoalType;
- (bool)hasIdentifier;
- (bool)hasMinimumPercentageComplete;
- (bool)hasTimeOfDayRule;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (double)minimumPercentageComplete;
- (bool)readFrom:(id)arg1;
- (void)setCoalescingRules:(id)arg1;
- (void)setGoalBufferPercentage:(double)arg1;
- (void)setGoalType:(int)arg1;
- (void)setHasGoalBufferPercentage:(bool)arg1;
- (void)setHasGoalType:(bool)arg1;
- (void)setHasMinimumPercentageComplete:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMinimumPercentageComplete:(double)arg1;
- (void)setTimeOfDayRule:(id)arg1;
- (id)timeOfDayRule;
- (void)writeTo:(id)arg1;

@end
