
@interface PXThumbnailCacheEntry : NSObject {
    NSData * _data;
    struct PHAssetResourceTableDataSpecification { 
        int width; 
        int height; 
        int bytesPerRow; 
        int dataWidth; 
        int dataHeight; 
        int imageDataOffset; 
        long long kind; 
    }  _dataSpec;
    NSManagedObjectID * _objectID;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) struct PHAssetResourceTableDataSpecification { int x1; int x2; int x3; int x4; int x5; int x6; long long x7; } dataSpec;
@property (nonatomic, readonly) NSManagedObjectID *objectID;

- (void).cxx_destruct;
- (id)data;
- (struct PHAssetResourceTableDataSpecification { int x1; int x2; int x3; int x4; int x5; int x6; long long x7; })dataSpec;
- (id)initWithObjectID:(id)arg1 dataSpec:(const struct PHAssetResourceTableDataSpecification { int x1; int x2; int x3; int x4; int x5; int x6; long long x7; }*)arg2 data:(id)arg3;
- (id)objectID;

@end
