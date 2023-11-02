
@interface _CDMemoryUsageInterval : NSObject {
    NSString * _client;
    unsigned long long  _concurrentPeakMemoryUsage;
    bool  _concurrentStart;
    unsigned long long  _endingLifetimeMaxMemoryUsage;
    unsigned long long  _endingMemoryUsage;
    NSString * _name;
    unsigned long long  _num;
    unsigned long long  _peakMemoryUsage;
    bool  _reset;
    unsigned long long  _startTime;
    unsigned long long  _startingLifetimeMaxMemoryUsage;
    unsigned long long  _startingMemoryUsage;
    unsigned long long  _state;
}

@property (nonatomic, readonly) NSString *client;
@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;
- (void)begin;
- (id)client;
- (void)dealloc;
- (void)end;
- (id)initWithName:(id)arg1 client:(id)arg2;
- (id)name;

@end
