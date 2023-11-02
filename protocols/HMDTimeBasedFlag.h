
@protocol HMDTimeBasedFlag

@required

- (unsigned long long)bitsForDate:(NSDate *)arg1 bitCount:(long long)arg2 outValidBitCount:(long long*)arg3;
- (unsigned long long)currentBits;
- (id)initWithSerializedFlag:(NSDictionary *)arg1 context:(id <HMDTimeBasedFlagContext>)arg2 dateProvider:(HMMDateProvider *)arg3;
- (NSDictionary *)serializeToDictionary;
- (void)setBitForDate:(NSDate *)arg1;
- (void)setCurrentBit;

@end
