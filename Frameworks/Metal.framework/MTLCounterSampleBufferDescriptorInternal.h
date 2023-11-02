
@interface MTLCounterSampleBufferDescriptorInternal : MTLCounterSampleBufferDescriptor <NSCopying> {
    <MTLCounterSet> * _counterSet;
    NSString * _label;
    unsigned long long  _sampleCount;
    unsigned long long  _storageMode;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)counterSet;
- (void)dealloc;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)label;
- (unsigned long long)sampleCount;
- (void)setCounterSet:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setSampleCount:(unsigned long long)arg1;
- (void)setStorageMode:(unsigned long long)arg1;
- (unsigned long long)storageMode;

@end
