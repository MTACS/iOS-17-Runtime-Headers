
@interface MDLArchiveAssetResolver : NSObject <MDLAssetResolver> {
    NSMutableDictionary * _archiveDictionary;
    NSURL * _archiveURL;
    NSData * _data;
    NSString * _rootUSDPath;
}

@property (nonatomic, retain) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addResolvedAssetNamed:(id)arg1 offset:(unsigned long long)arg2 fileSize:(unsigned long long)arg3;
- (id)assetNamesInArchive;
- (bool)canResolveAssetNamed:(id)arg1;
- (id)data;
- (id)initWithURL:(id)arg1;
- (void)removeAssetNamed:(id)arg1;
- (id)resolveAssetNamed:(id)arg1;
- (id)resolveInsideArchiveWithAssetNamed:(id)arg1;
- (void)setData:(id)arg1;

@end
