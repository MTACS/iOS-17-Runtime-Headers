
@interface FCPuzzleThumbnailHandle : NSObject {
    FCAssetHandle * _assetHandle;
    FCAssetManager * _assetManager;
    <FCContentContext> * _context;
    long long  _dayOfWeek;
    NSString * _resourceMapId;
}

@property (nonatomic, retain) FCAssetHandle *assetHandle;
@property (nonatomic, retain) FCAssetManager *assetManager;
@property (nonatomic, retain) <FCContentContext> *context;
@property (nonatomic, readonly) long long dayOfWeek;
@property (nonatomic, readonly) NSString *resourceMapId;

+ (id)imageUrlFromResourceMap:(id)arg1 dayOfWeek:(long long)arg2;

- (void).cxx_destruct;
- (id)assetHandle;
- (id)assetManager;
- (id)context;
- (long long)dayOfWeek;
- (void)downloadIfNeededWithGroup:(id)arg1;
- (id)initWithPublishDate:(id)arg1 imageResourceMapId:(id)arg2 context:(id)arg3 assetManager:(id)arg4;
- (id)resourceMapId;
- (void)setAssetHandle:(id)arg1;
- (void)setAssetManager:(id)arg1;
- (void)setContext:(id)arg1;

@end
