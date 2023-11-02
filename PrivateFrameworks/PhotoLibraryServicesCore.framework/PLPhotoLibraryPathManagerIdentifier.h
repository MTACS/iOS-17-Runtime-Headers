
@interface PLPhotoLibraryPathManagerIdentifier : NSObject <NSCopying> {
    unsigned char  _bundleFormat;
    NSString * _identifier;
}

@property (nonatomic) unsigned char bundleFormat;
@property (nonatomic, copy) NSString *identifier;

- (void).cxx_destruct;
- (unsigned char)bundleFormat;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithLibraryID:(id)arg1 libraryFormat:(unsigned char)arg2;
- (id)initWithPathManager:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPathManagerIdentifier:(id)arg1;
- (void)setBundleFormat:(unsigned char)arg1;
- (void)setIdentifier:(id)arg1;

@end
