
@interface PXGAssetImageCache : NSObject {
    NSMutableSet * _activeAssets;
    NSMutableIndexSet * _activeRequestIDs;
    NSMutableArray * _entries;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _reusableEntries;
}

- (void).cxx_destruct;
- (void)_cacheImage:(struct CGImage { }*)arg1 orientation:(unsigned int)arg2 isDegraded:(bool)arg3 forRequestID:(int)arg4 outCGImage:(out struct CGImage {}**)arg5;
- (struct CGImage { }*)cacheCGImage:(struct CGImage { }*)arg1 orientation:(unsigned int)arg2 isDegraded:(bool)arg3 forRequestID:(int)arg4;
- (void)clearAllCachedImages;
- (void)clearCachedImagesForRequestIDs:(id)arg1;
- (id)debugDescription;
- (id)description;
- (bool)getCachedImage:(struct CGImage {}**)arg1 withOrientation:(unsigned int*)arg2 outIsDegraded:(bool*)arg3 forAsset:(id)arg4 targetSize:(struct CGSize { double x1; double x2; })arg5 contentMode:(long long)arg6 forRequestID:(int)arg7;
- (id)init;

@end
