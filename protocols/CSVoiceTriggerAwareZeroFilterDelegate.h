
@protocol CSVoiceTriggerAwareZeroFilterDelegate <NSObject>

@required

- (void)zeroFilter:(CSVoiceTriggerAwareZeroFilter *)arg1 zeroFilteredBufferAvailable:(NSData *)arg2 atHostTime:(unsigned long long)arg3;

@end
