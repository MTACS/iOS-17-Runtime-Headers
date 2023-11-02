
@interface DDSTimedAnalytic : NSObject {
    double  _endTime;
    NSString * _identifier;
    int  _lastAction;
    unsigned long long  _retries;
    double  _startTime;
    bool  _success;
}

@property (nonatomic, readonly) unsigned long long durationInSec;
@property (nonatomic) double endTime;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) int lastAction;
@property (nonatomic) unsigned long long retries;
@property (nonatomic) double startTime;
@property (nonatomic) bool success;

- (void).cxx_destruct;
- (unsigned long long)durationInSec;
- (double)endTime;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (int)lastAction;
- (unsigned long long)retries;
- (void)setEndTime:(double)arg1;
- (void)setLastAction:(int)arg1;
- (void)setRetries:(unsigned long long)arg1;
- (void)setStartTime:(double)arg1;
- (void)setSuccess:(bool)arg1;
- (double)startTime;
- (bool)success;
- (void)updateWithAction:(int)arg1;

@end
