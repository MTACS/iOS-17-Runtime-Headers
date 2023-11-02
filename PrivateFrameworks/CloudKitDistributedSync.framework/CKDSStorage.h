
@interface CKDSStorage : NSObject <NSCopying> {
    NSData * _data;
    CKDSStorageFile * _file;
    bool  _writable;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) CKDSStorageFile *file;
@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic) bool writable;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)dataWithError:(id*)arg1;
- (id)description;
- (id)file;
- (id)fileURL;
- (id)initForWriting:(bool)arg1 withFile:(id)arg2 orData:(id)arg3;
- (bool)isEqual:(id)arg1;
- (void)setWritable:(bool)arg1;
- (bool)size:(unsigned long long*)arg1 error:(id*)arg2;
- (bool)writable;

@end
