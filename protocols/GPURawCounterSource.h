
@protocol GPURawCounterSource <NSObject>

@required

- (NSArray *)availableCounters;
- (NSArray *)availableTriggers;
- (unsigned int)drainRingBufferAtIndex:(unsigned int)arg1 dataSize:(unsigned int)arg2;
- (NSDictionary *)features;
- (void)flushRingBuffers;
- (bool)isEnabled;
- (NSString *)name;
- (NSDictionary *)options;
- (bool)pollCountersAtBufferIndex:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 9: unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long*, unsigned long long, unsigned long long, void*
- (bool)postProcessRawDataWithRingBufferIndex:(unsigned int)arg1 source:(char *)arg2 sourceSize:(unsigned long long)arg3 sourceRead:(unsigned long long*)arg4 sourceWrite:(unsigned long long)arg5 output:(char *)arg6 outputSize:(unsigned long long)arg7 outputRead:(unsigned long long)arg8 outputWrite:(unsigned long long*)arg9 isLast:(bool)arg10;
- (bool)postProcessRawDataWithRingBufferSource:(char *)arg1 sourceSize:(unsigned long long)arg2 sourceRead:(unsigned long long*)arg3 sourceWrite:(unsigned long long)arg4 output:(char *)arg5 outputSize:(unsigned long long)arg6 outputRead:(unsigned long long)arg7 outputWrite:(unsigned long long*)arg8 isLast:(bool)arg9;
- (bool)postProcessRawDataWithSource:(char *)arg1 sourceSize:(unsigned long long)arg2 sourceRead:(unsigned long long*)arg3 output:(char *)arg4 outputSize:(unsigned long long)arg5 outputWritten:(unsigned long long*)arg6 isLast:(bool)arg7;
- (bool)requestCounters:(NSArray *)arg1 firstErrorIndex:(unsigned long long*)arg2;
- (bool)requestTriggers:(NSArray *)arg1 firstErrorIndex:(unsigned long long*)arg2;
- (void)resetRawDataPostProcessor;
- (bool)ringBufferInfoAtIndex:(unsigned int)arg1 base:(char **)arg2 size:(unsigned int*)arg3 dataOffset:(unsigned int*)arg4 dataSize:(unsigned int*)arg5;
- (unsigned int)ringBufferNum;
- (NSArray *)selectedCounters;
- (NSArray *)selectedTriggers;
- (bool)setEnabled:(bool)arg1;
- (void)setOptions:(NSDictionary *)arg1;
- (<GPURawCounterSourceGroup> *)sourceGroup;

@end
