
@interface VFXREBindingMeshData : NSObject {
    void buffer;
    void format;
    void length;
    void offset;
    void stride;
}

@property (nonatomic, retain) <MTLBuffer> *buffer;
@property (nonatomic) unsigned long long format;
@property (nonatomic) unsigned int length;
@property (nonatomic) unsigned short offset;
@property (nonatomic) unsigned short stride;

- (void).cxx_destruct;
- (id)buffer;
- (unsigned long long)format;
- (id)init;
- (unsigned int)length;
- (unsigned short)offset;
- (void)setBuffer:(id)arg1;
- (void)setFormat:(unsigned long long)arg1;
- (void)setLength:(unsigned int)arg1;
- (void)setOffset:(unsigned short)arg1;
- (void)setStride:(unsigned short)arg1;
- (unsigned short)stride;

@end
