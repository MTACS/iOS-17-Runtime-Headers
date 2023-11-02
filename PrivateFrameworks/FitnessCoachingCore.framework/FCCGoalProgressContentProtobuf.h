
@interface FCCGoalProgressContentProtobuf : PBCodable <NSCopying> {
    NSString * _eventIdentifier;
    double  _expectedGoalValue;
    int  _goalTypeToHighlight;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _goalTypesToDisplays;
    struct { 
        unsigned int expectedGoalValue : 1; 
        unsigned int goalTypeToHighlight : 1; 
    }  _has;
}

@property (nonatomic, retain) NSString *eventIdentifier;
@property (nonatomic) double expectedGoalValue;
@property (nonatomic) int goalTypeToHighlight;
@property (nonatomic, readonly) int*goalTypesToDisplays;
@property (nonatomic, readonly) unsigned long long goalTypesToDisplaysCount;
@property (nonatomic, readonly) bool hasEventIdentifier;
@property (nonatomic) bool hasExpectedGoalValue;
@property (nonatomic) bool hasGoalTypeToHighlight;

- (void).cxx_destruct;
- (void)addGoalTypesToDisplay:(int)arg1;
- (void)clearGoalTypesToDisplays;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)eventIdentifier;
- (double)expectedGoalValue;
- (int)goalTypeToHighlight;
- (int)goalTypesToDisplayAtIndex:(unsigned long long)arg1;
- (int*)goalTypesToDisplays;
- (unsigned long long)goalTypesToDisplaysCount;
- (bool)hasEventIdentifier;
- (bool)hasExpectedGoalValue;
- (bool)hasGoalTypeToHighlight;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEventIdentifier:(id)arg1;
- (void)setExpectedGoalValue:(double)arg1;
- (void)setGoalTypeToHighlight:(int)arg1;
- (void)setGoalTypesToDisplays:(int*)arg1 count:(unsigned long long)arg2;
- (void)setHasExpectedGoalValue:(bool)arg1;
- (void)setHasGoalTypeToHighlight:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
