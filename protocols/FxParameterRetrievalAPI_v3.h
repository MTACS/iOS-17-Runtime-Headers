
@protocol FxParameterRetrievalAPI_v3 <FxParameterRetrievalAPI_v2>

@required

- (bool)getCustomParameterValue:(id*)arg1 fromParm:(unsigned int)arg2 atTime:(double)arg3;
- (bool)getPathID:(void**)arg1 fromParm:(unsigned int)arg2 atTime:(double)arg3;

@end
