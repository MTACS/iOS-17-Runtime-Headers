
@interface AUV2BridgeBusArray : AUAudioUnitBusArray

- (id)initWithOwner:(id)arg1 scope:(unsigned int)arg2;
- (bool)isCountChangeable;
- (bool)setBusCount:(unsigned long long)arg1 error:(id*)arg2;

@end
