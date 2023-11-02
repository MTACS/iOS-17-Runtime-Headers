
@interface _FBSCDHashCacheInfo : NSObject {
    NSData * _cachedCodeDirectoryHash;
    unsigned int  _cachedCodeDirectoryHashType;
}

@property (nonatomic, readonly) NSData *cachedCodeDirectoryHash;
@property (nonatomic, readonly) unsigned int cachedCodeDirectoryHashType;

+ (id)cacheInfoWithData:(id)arg1 hashType:(unsigned int)arg2;

- (void).cxx_destruct;
- (id)cachedCodeDirectoryHash;
- (unsigned int)cachedCodeDirectoryHashType;

@end
