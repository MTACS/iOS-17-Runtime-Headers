
@interface _GPURawCounterSource : NSObject <GPURawCounterSource> {
    NSDictionary * _features;
    NSString * _name;
    NSDictionary * _options;
    <GPURawCounterSourceGroup> * _sourceGroup;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSDictionary *features;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *name;
@property (copy) NSDictionary *options;
@property (readonly) <GPURawCounterSourceGroup> *sourceGroup;
@property (readonly) Class superclass;

- (id)availableCounters;
- (id)availableTriggers;
- (void)dealloc;
- (unsigned int)drainRingBufferAtIndex:(unsigned int)arg1 dataSize:(unsigned int)arg2;
- (id)features;
- (void)flushRingBuffers;
- (id)initWithSourceGroup:(id)arg1 name:(id)arg2;
- (bool)isEnabled;
- (id)name;
- (id)options;
- (bool)pollCountersAtBufferIndex:(unsigned int)arg1 withBlock:(id /* block */)arg2;
- (bool)postProcessRawDataWithRingBufferIndex:(unsigned int)arg1 source:(char *)arg2 sourceSize:(unsigned long long)arg3 sourceRead:(unsigned long long*)arg4 sourceWrite:(unsigned long long)arg5 output:(char *)arg6 outputSize:(unsigned long long)arg7 outputRead:(unsigned long long)arg8 outputWrite:(unsigned long long*)arg9 isLast:(bool)arg10;
- (bool)postProcessRawDataWithRingBufferSource:(char *)arg1 sourceSize:(unsigned long long)arg2 sourceRead:(unsigned long long*)arg3 sourceWrite:(unsigned long long)arg4 output:(char *)arg5 outputSize:(unsigned long long)arg6 outputRead:(unsigned long long)arg7 outputWrite:(unsigned long long*)arg8 isLast:(bool)arg9;
- (bool)postProcessRawDataWithSource:(char *)arg1 sourceSize:(unsigned long long)arg2 sourceRead:(unsigned long long*)arg3 output:(char *)arg4 outputSize:(unsigned long long)arg5 outputWritten:(unsigned long long*)arg6 isLast:(bool)arg7;
- (bool)requestCounters:(id)arg1 firstErrorIndex:(unsigned long long*)arg2;
- (bool)requestTriggers:(id)arg1 firstErrorIndex:(unsigned long long*)arg2;
- (void)resetRawDataPostProcessor;
- (bool)ringBufferInfoAtIndex:(unsigned int)arg1 base:(char **)arg2 size:(unsigned int*)arg3 dataOffset:(unsigned int*)arg4 dataSize:(unsigned int*)arg5;
- (unsigned int)ringBufferNum;
- (id)selectedCounters;
- (id)selectedTriggers;
- (bool)setEnabled:(bool)arg1;
- (void)setOptions:(id)arg1;
- (id)sourceGroup;

@end
