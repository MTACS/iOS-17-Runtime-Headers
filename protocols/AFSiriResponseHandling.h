
@protocol AFSiriResponseHandling <NSObject, AFSiriRequestFailureHandling>

@required

- (void)handleSiriResponse:(AFSiriResponse *)arg1 atTime:(unsigned long long)arg2;

@end
