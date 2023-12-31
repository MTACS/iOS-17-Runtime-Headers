
@interface TSTimeErrorValue : NSObject {
    long long  _error;
    unsigned long long  _timestamp;
}

@property (nonatomic, readonly) long long error;
@property (nonatomic, readonly) unsigned long long timestamp;

+ (id)timeErrorSequenceWithTimestamps:(unsigned long long*)arg1 timeError:(long long*)arg2 count:(long long)arg3;

- (id)description;
- (long long)error;
- (id)initWithTimestamp:(unsigned long long)arg1 andError:(long long)arg2;
- (unsigned long long)timestamp;

@end
