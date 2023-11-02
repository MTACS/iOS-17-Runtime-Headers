
@interface ASCJitterBackoff : NSObject <ASCBackoff> {
    ASCExponentialBackoff * _exponentialBackoff;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) ASCExponentialBackoff *exponentialBackoff;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)exponentialBackoff;
- (id)initWithBaseSleepTimeInterval:(double)arg1 maxSleepTimeInterval:(double)arg2;
- (double)nextSleepTimeInterval;
- (void)reset;

@end
