
@interface MKPhotoLibraryAsset : NSObject {
    NSString * _collection;
    NSString * _filename;
    NSString * _identifier;
    NSString * _originalFilename;
    NSString * _path;
    long long  _rowID;
    unsigned long long  _size;
}

@property (nonatomic, copy) NSString *collection;
@property (nonatomic, copy) NSString *filename;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *originalFilename;
@property (nonatomic, copy) NSString *path;
@property (nonatomic) long long rowID;
@property (nonatomic) unsigned long long size;

- (void).cxx_destruct;
- (id)collection;
- (id)filename;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithPath:(id)arg1 filename:(id)arg2 collection:(id)arg3 originalFilename:(id)arg4 size:(unsigned long long)arg5;
- (id)originalFilename;
- (id)path;
- (long long)rowID;
- (void)setCollection:(id)arg1;
- (void)setFilename:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setOriginalFilename:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setRowID:(long long)arg1;
- (void)setSize:(unsigned long long)arg1;
- (unsigned long long)size;

@end
