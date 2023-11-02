
@interface OSASharedCacheEntry : NSObject {
    bool  _isDefaultSharedCache;
    struct dyld_uuid_info_64 { unsigned long long x1; unsigned char x2[16]; } * _layout;
    unsigned int  _layoutImageCount;
    struct dyld_shared_cache_loadinfo_v2 { unsigned long long x1; unsigned char x2[16]; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned int x6; } * _original;
    unsigned int  _sharedCacheID;
    unsigned long long  _sharedCacheSlide;
    unsigned long long  _sharedCacheUnreliableSlidBaseAddress;
    BOOL * _sharedCacheUuid;
}

@property (nonatomic, readonly) bool isDefaultSharedCache;
@property (nonatomic, readonly) struct dyld_uuid_info_64 { unsigned long long x1; unsigned char x2[16]; }*layout;
@property (nonatomic, readonly) unsigned int layoutImageCount;
@property (nonatomic, readonly) struct dyld_shared_cache_loadinfo_v2 { unsigned long long x1; unsigned char x2[16]; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned int x6; }*original;
@property (nonatomic, readonly) unsigned int sharedCacheID;
@property (nonatomic, readonly) unsigned long long sharedCacheSlide;
@property (nonatomic, readonly) unsigned long long sharedCacheUnreliableSlidBaseAddress;
@property (nonatomic, readonly) BOOL*sharedCacheUuid;

- (bool)isDefaultSharedCache;
- (struct dyld_uuid_info_64 { unsigned long long x1; unsigned char x2[16]; }*)layout;
- (unsigned int)layoutImageCount;
- (struct dyld_shared_cache_loadinfo_v2 { unsigned long long x1; unsigned char x2[16]; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned int x6; }*)original;
- (void)setSharedCacheInfo:(struct dyld_shared_cache_loadinfo_v2 { unsigned long long x1; unsigned char x2[16]; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned int x6; }*)arg1;
- (void)setSharedCacheLayout:(struct dyld_uuid_info_64 { unsigned long long x1; unsigned char x2[16]; }*)arg1 andCount:(unsigned int)arg2;
- (unsigned int)sharedCacheID;
- (unsigned long long)sharedCacheSlide;
- (unsigned long long)sharedCacheUnreliableSlidBaseAddress;
- (BOOL*)sharedCacheUuid;

@end
