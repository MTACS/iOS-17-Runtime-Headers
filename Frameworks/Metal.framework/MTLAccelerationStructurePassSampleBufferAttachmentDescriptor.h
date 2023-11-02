
@interface MTLAccelerationStructurePassSampleBufferAttachmentDescriptor : NSObject <NSCopying> {
    unsigned long long  _endOfEncoderSampleIndex;
    <MTLCounterSampleBuffer> * _sampleBuffer;
    unsigned long long  _startOfEncoderSampleIndex;
}

@property (nonatomic) unsigned long long endOfEncoderSampleIndex;
@property (nonatomic, retain) <MTLCounterSampleBuffer> *sampleBuffer;
@property (nonatomic) unsigned long long startOfEncoderSampleIndex;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)endOfEncoderSampleIndex;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)sampleBuffer;
- (void)setEndOfEncoderSampleIndex:(unsigned long long)arg1;
- (void)setSampleBuffer:(id)arg1;
- (void)setStartOfEncoderSampleIndex:(unsigned long long)arg1;
- (unsigned long long)startOfEncoderSampleIndex;

@end
