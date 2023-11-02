
@interface VCImageResizingConverter : VCImageConverterBase {
    struct OpaqueVTPixelTransferSession { } * _transferSession;
}

- (void)dealloc;
- (id)initWithOutputWidth:(unsigned long long)arg1 outputHeight:(unsigned long long)arg2 formatType:(unsigned int)arg3;

@end
