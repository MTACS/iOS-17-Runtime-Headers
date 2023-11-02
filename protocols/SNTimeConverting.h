
@protocol SNTimeConverting <NSObject>

@required

- (double)clientSampleRate;
- (long long)clientSampleTimeFromSampleTime:(long long)arg1 fromBox:(void*)arg2;

@end
