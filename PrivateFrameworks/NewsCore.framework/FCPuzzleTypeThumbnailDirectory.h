
@interface FCPuzzleTypeThumbnailDirectory : NSObject <FCPuzzleTypeThumbnailDirectoryType> {
    FCAssetManager * _assetManager;
    <FCContentContext> * _context;
    NSString * _resourceMapId;
}

@property (nonatomic, retain) FCAssetManager *assetManager;
@property (nonatomic, retain) <FCContentContext> *context;
@property (nonatomic, copy) NSString *resourceMapId;

- (void).cxx_destruct;
- (id)assetManager;
- (id)context;
- (id)initWithResourceMapId:(id)arg1 assetManager:(id)arg2 context:(id)arg3;
- (id)resourceMapId;
- (void)setAssetManager:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setResourceMapId:(id)arg1;
- (id)smallThumbnailForDate:(id)arg1;

@end
