
@protocol CSSecondPassProgressDelegate <NSObject>

@required

- (void)secondPassDidStartForClient:(unsigned long long)arg1 deviceId:(NSString *)arg2 withFirstPassEstimate:(double)arg3;
- (void)secondPassDidStopForClient:(unsigned long long)arg1 deviceId:(NSString *)arg2;

@end
