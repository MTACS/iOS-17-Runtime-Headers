
@interface TRIFetchOptions : NSObject <NSCopying> {
    NSNumber * _cacheDeleteAvailableSpaceClass;
    TRIDownloadOptions * _downloadOptions;
}

@property (nonatomic, readonly) NSNumber *cacheDeleteAvailableSpaceClass;
@property (nonatomic, readonly) TRIDownloadOptions *downloadOptions;

+ (id)optionsWithDownloadOptions:(id)arg1 cacheDeleteAvailableSpaceClass:(id)arg2;

- (void).cxx_destruct;
- (id)cacheDeleteAvailableSpaceClass;
- (id)copyWithReplacementCacheDeleteAvailableSpaceClass:(id)arg1;
- (id)copyWithReplacementDownloadOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)downloadOptions;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDownloadOptions:(id)arg1 cacheDeleteAvailableSpaceClass:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToOptions:(id)arg1;

@end
