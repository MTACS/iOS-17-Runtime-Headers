
@protocol AFSiriRequestFailureHandling <NSObject>

@required

- (void)handleFailureOfRequest:(AFSiriRequest *)arg1 error:(NSError *)arg2 atTime:(unsigned long long)arg3;

@end
