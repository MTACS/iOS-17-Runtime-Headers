
@interface SACallTreeTruncatedLeafCallstacks : SACallTreeFrame <SAJSONSerialization> {
    NSString * _otherCallTreeDescription;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)callTreeFrameWithFrame:(id)arg1 startSampleIndex:(unsigned long long)arg2 sampleCount:(unsigned long long)arg3 isLeafFrame:(bool)arg4;

- (void).cxx_destruct;
- (id)initWithFrame:(id)arg1 startSampleIndex:(unsigned long long)arg2 sampleCount:(unsigned long long)arg3 otherCallTreeDescription:(id)arg4;
- (bool)isTruncatedLeafCallstack;
- (void)writeJSONDictionaryEntriesToStream:(id)arg1;

@end
