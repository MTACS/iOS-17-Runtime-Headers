
@interface MFTypeInfo : NSObject {
    NSString * _filename;
    NSString * _mimeType;
    unsigned int  _osType;
    NSString * _pathExtension;
}

@property (nonatomic, copy) NSString *filename;
@property (nonatomic, copy) NSString *mimeType;
@property (nonatomic) unsigned int osType;
@property (nonatomic, copy) NSString *pathExtension;

- (void).cxx_destruct;
- (id)filename;
- (id)mimeType;
- (unsigned int)osType;
- (id)pathExtension;
- (void)setFilename:(id)arg1;
- (void)setMimeType:(id)arg1;
- (void)setOsType:(unsigned int)arg1;
- (void)setPathExtension:(id)arg1;

@end
