
@interface AVCaptureMetadataInput : AVCaptureInput {
    AVCaptureMetadataInputInternal * _internal;
}

+ (void)initialize;
+ (id)metadataInputWithFormatDescription:(struct opaqueCMFormatDescription { }*)arg1 clock:(struct OpaqueCMClock { }*)arg2;

- (bool)appendTimedMetadataGroup:(id)arg1 error:(id*)arg2;
- (struct OpaqueCMClock { }*)clock;
- (void)dealloc;
- (id)init;
- (id)initWithFormatDescription:(struct opaqueCMFormatDescription { }*)arg1 clock:(struct OpaqueCMClock { }*)arg2;
- (id)ports;
- (id)sourceID;

@end
