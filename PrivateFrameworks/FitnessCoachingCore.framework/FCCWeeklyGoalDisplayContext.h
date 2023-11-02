
@interface FCCWeeklyGoalDisplayContext : NSObject {
    unsigned long long  _displayCount;
    NSDate * _lastDisplayDate;
}

@property (nonatomic, readonly) unsigned long long displayCount;
@property (nonatomic, readonly) NSDate *lastDisplayDate;

- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)displayCount;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDisplayCount:(long long)arg1 lastDisplayDate:(id)arg2;
- (id)lastDisplayDate;

@end
