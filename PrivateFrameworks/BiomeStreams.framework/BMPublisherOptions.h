
@interface BMPublisherOptions : NSObject {
    NSDate * _endDate;
    unsigned long long  _lastN;
    unsigned long long  _maxEvents;
    bool  _reversed;
    NSDate * _startDate;
}

@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) unsigned long long lastN;
@property (nonatomic, readonly) unsigned long long maxEvents;
@property (nonatomic, readonly) bool reversed;
@property (nonatomic, readonly) NSDate *startDate;

+ (id)reversed;

- (void).cxx_destruct;
- (id)description;
- (id)endDate;
- (unsigned long long)hash;
- (id)init;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 maxEvents:(unsigned long long)arg3 lastN:(unsigned long long)arg4 reversed:(bool)arg5;
- (bool)isEqual:(id)arg1;
- (unsigned long long)lastN;
- (unsigned long long)maxEvents;
- (bool)reversed;
- (id)startDate;

@end
