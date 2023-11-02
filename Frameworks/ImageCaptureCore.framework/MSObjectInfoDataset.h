
@interface MSObjectInfoDataset : NSObject {
    unsigned short  _associationType;
    unsigned long long  _captureDate_tvsec;
    NSString * _filename;
    unsigned int  _imageBitDepth;
    unsigned short  _imageOrientation;
    unsigned int  _imagePixHeight;
    unsigned int  _imagePixWidth;
    unsigned long long  _modificationDate_tvsec;
    unsigned long long  _objectCompressedSize;
    unsigned short  _objectFormat;
    unsigned int  _objectHandle;
    unsigned int  _parentObject;
    unsigned short  _protectionStatus;
    unsigned int  _thumbCompressedSize;
    unsigned short  _thumbFormat;
    unsigned int  _thumbOffset;
    unsigned int  _thumbPixHeight;
    unsigned int  _thumbPixWidth;
}

- (unsigned short)associationType;
- (unsigned long long)captureDate_tvsec;
- (id)content;
- (void)contentLength:(unsigned int*)arg1 bufferLength:(unsigned int*)arg2;
- (void)dealloc;
- (id)filename;
- (unsigned int)imageBitDepth;
- (unsigned short)imageOrietation;
- (unsigned int)imagePixHeight;
- (unsigned int)imagePixWidth;
- (id)init;
- (id)initWithBytes:(char *)arg1 length:(unsigned int)arg2;
- (id)initWithData:(id)arg1;
- (unsigned long long)modificationDate_tvsec;
- (unsigned long long)objectCompressedSize;
- (unsigned short)objectFormat;
- (unsigned int)objectHandle;
- (unsigned int)parentObject;
- (unsigned short)protectionStatus;
- (void)setAssociationType:(unsigned short)arg1;
- (void)setCaptureDate_tvsec:(unsigned long long)arg1;
- (void)setFilename:(id)arg1;
- (void)setImageBitDepth:(unsigned int)arg1;
- (void)setImageOrietation:(unsigned short)arg1;
- (void)setImagePixHeight:(unsigned int)arg1;
- (void)setImagePixWidth:(unsigned int)arg1;
- (void)setModificationDate_tvsec:(unsigned long long)arg1;
- (void)setObjectCompressedSize:(unsigned long long)arg1;
- (void)setObjectFormat:(unsigned short)arg1;
- (void)setObjectHandle:(unsigned int)arg1;
- (void)setParentObject:(unsigned int)arg1;
- (void)setProtectionStatus:(unsigned short)arg1;
- (void)setThumbCompressedSize:(unsigned int)arg1;
- (void)setThumbFormat:(unsigned short)arg1;
- (void)setThumbOffset:(unsigned int)arg1;
- (void)setThumbPixHeight:(unsigned int)arg1;
- (void)setThumbPixWidth:(unsigned int)arg1;
- (unsigned int)thumbCompressedSize;
- (unsigned short)thumbFormat;
- (unsigned int)thumbOffset;
- (unsigned int)thumbPixHeight;
- (unsigned int)thumbPixWidth;

@end
