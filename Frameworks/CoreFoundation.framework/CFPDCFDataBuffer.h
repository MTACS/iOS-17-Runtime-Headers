
@interface CFPDCFDataBuffer : CFPDDataBuffer {
    struct __CFData { } * data;
}

- (void*)bytes;
- (struct __CFData { }*)copyCFData;
- (id)copyXPCData;
- (void)dealloc;
- (id)initWithCFData:(struct __CFData { }*)arg1;
- (unsigned long long)length;

@end
