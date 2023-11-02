
@interface _CSIRenditionBlockData : NSObject {
    unsigned int  _allocateMemory;
    unsigned long long  _allocationSize;
    char * _data;
    unsigned int  _dataPixelFormat;
    unsigned char  _imageBlockReleaseCount;
    _Atomic unsigned long long  _imageBytes;
    unsigned int  _mmappedData;
    BOOL  _name;
    unsigned int  _nrows;
    int  _pixelFormat;
    unsigned long long  _rowbytes;
    unsigned long long  _sourceRowbytes;
}

- (void)dealloc;

@end
