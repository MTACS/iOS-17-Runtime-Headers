
@interface PXPhotosMetadataCountsCache : NSObject {
    struct { 
        unsigned long long photosCount; 
        unsigned long long videosCount; 
        unsigned long long othersCount; 
    }  _assetCounts;
    struct { 
        unsigned long long photosCount; 
        unsigned long long videosCount; 
        unsigned long long othersCount; 
    }  _guestAssetCounts;
}

@property (nonatomic, readonly) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; } assetCounts;
@property (nonatomic, readonly) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; } guestAssetCounts;

- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })assetCounts;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })guestAssetCounts;
- (id)initWithAssetCounts:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 guestAssetCounts:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2;

@end
