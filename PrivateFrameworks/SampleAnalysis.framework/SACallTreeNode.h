
@interface SACallTreeNode : NSObject {
    unsigned long long  _sampleCount;
    unsigned long long  _startSampleIndex;
}

@property unsigned long long sampleCount;
@property unsigned long long startSampleIndex;

- (id)initWithStartSampleIndex:(unsigned long long)arg1 sampleCount:(unsigned long long)arg2;
- (unsigned long long)sampleCount;
- (void)setSampleCount:(unsigned long long)arg1;
- (void)setStartSampleIndex:(unsigned long long)arg1;
- (unsigned long long)startSampleIndex;

@end
