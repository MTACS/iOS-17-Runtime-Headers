
@interface FPSharedCache : NSObject <NSCopying> {
    unsigned int  _alignment;
    unsigned long long  _baseAddress;
    unsigned long long  _mappedSize;
    unsigned long long  _slide;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) unsigned int alignment;
@property (nonatomic, readonly) unsigned long long baseAddress;
@property (nonatomic, readonly) unsigned long long mappedSize;
@property (nonatomic, readonly) unsigned long long slide;
@property (nonatomic, readonly) NSUUID *uuid;

+ (id)sharedCacheForDyldSnapshot:(struct dyld_process_snapshot_s { }*)arg1;

- (void).cxx_destruct;
- (unsigned int)alignment;
- (unsigned long long)baseAddress;
- (bool)containsAddress:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)mappedSize;
- (unsigned long long)slide;
- (id)uuid;

@end
