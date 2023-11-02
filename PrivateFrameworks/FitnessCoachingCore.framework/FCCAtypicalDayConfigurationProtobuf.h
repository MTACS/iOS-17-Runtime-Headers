
@interface FCCAtypicalDayConfigurationProtobuf : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _allowedGoalTypes;
    struct { 
        unsigned int minimumAheadPercentage : 1; 
        unsigned int minimumBehindPercentage : 1; 
    }  _has;
    NSString * _identifier;
    double  _minimumAheadPercentage;
    double  _minimumBehindPercentage;
    FCCPercentageOfDayRuleProtobuf * _percentageOfDayRule;
}

@property (nonatomic, readonly) int*allowedGoalTypes;
@property (nonatomic, readonly) unsigned long long allowedGoalTypesCount;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic) bool hasMinimumAheadPercentage;
@property (nonatomic) bool hasMinimumBehindPercentage;
@property (nonatomic, readonly) bool hasPercentageOfDayRule;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) double minimumAheadPercentage;
@property (nonatomic) double minimumBehindPercentage;
@property (nonatomic, retain) FCCPercentageOfDayRuleProtobuf *percentageOfDayRule;

- (void).cxx_destruct;
- (void)addAllowedGoalTypes:(int)arg1;
- (int*)allowedGoalTypes;
- (int)allowedGoalTypesAtIndex:(unsigned long long)arg1;
- (unsigned long long)allowedGoalTypesCount;
- (void)clearAllowedGoalTypes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIdentifier;
- (bool)hasMinimumAheadPercentage;
- (bool)hasMinimumBehindPercentage;
- (bool)hasPercentageOfDayRule;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (double)minimumAheadPercentage;
- (double)minimumBehindPercentage;
- (id)percentageOfDayRule;
- (bool)readFrom:(id)arg1;
- (void)setAllowedGoalTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setHasMinimumAheadPercentage:(bool)arg1;
- (void)setHasMinimumBehindPercentage:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMinimumAheadPercentage:(double)arg1;
- (void)setMinimumBehindPercentage:(double)arg1;
- (void)setPercentageOfDayRule:(id)arg1;
- (void)writeTo:(id)arg1;

@end
