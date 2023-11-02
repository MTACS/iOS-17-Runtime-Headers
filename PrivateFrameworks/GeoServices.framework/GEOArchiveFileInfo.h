
@interface GEOArchiveFileInfo : NSObject {
    NSString * _filePath;
    unsigned long long  _length;
    unsigned long long  _offset;
}

@property (nonatomic, readonly, copy) NSString *filePath;
@property (nonatomic, readonly) unsigned long long length;
@property (nonatomic, readonly) unsigned long long offset;

- (void).cxx_destruct;
- (id)filePath;
- (id)initWithFilePath:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3;
- (unsigned long long)length;
- (unsigned long long)offset;

@end
