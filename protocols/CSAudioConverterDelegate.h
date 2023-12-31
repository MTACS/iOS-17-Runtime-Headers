
@protocol CSAudioConverterDelegate <NSObject>

@required

- (void)audioConverterDidConvertPackets:(CSAudioConverter *)arg1 packets:(NSArray *)arg2 durationInSec:(float)arg3 timestamp:(unsigned long long)arg4 arrivalTimestampToAudioRecorder:(unsigned long long)arg5;

@end
