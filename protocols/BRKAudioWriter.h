
@protocol BRKAudioWriter <NSObject>

@required

- (void)close;
- (void)writeSamples:(const short*)arg1 count:(unsigned long long)arg2;

@end
