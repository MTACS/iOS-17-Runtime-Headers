
@interface SiriAnalyticsSensitiveConditionSpan : NSObject {
    int  _conditionType;
    unsigned long long  _endedAt;
    bool  _hasEndedAtValue;
    bool  _hasStartedAtValue;
    unsigned long long  _startedAt;
}

@property (nonatomic) int conditionType;
@property (nonatomic) unsigned long long endedAt;
@property (nonatomic) unsigned long long startedAt;

- (int)conditionType;
- (bool)containsTimestamp:(unsigned long long)arg1;
- (unsigned long long)endedAt;
- (bool)hasEndedAt;
- (id)initWithConditionType:(int)arg1 startedAt:(unsigned long long)arg2;
- (void)setConditionType:(int)arg1;
- (void)setEndedAt:(unsigned long long)arg1;
- (void)setStartedAt:(unsigned long long)arg1;
- (unsigned long long)startedAt;

@end
