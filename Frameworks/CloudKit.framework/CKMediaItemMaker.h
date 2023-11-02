
@interface CKMediaItemMaker : NSObject {
    _TtC8CloudKit17AssetStreamHandle * _assetStreamHandle;
}

@property (nonatomic, readonly) _TtC8CloudKit17AssetStreamHandle *assetStreamHandle;

- (void).cxx_destruct;
- (id)assetStreamHandle;
- (id)dataRepresentationWithError:(id*)arg1;
- (id)initWithAssetStreamHandle:(id)arg1;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)makeAVPlayerItemWithURL:(id)arg1;
- (id)makeAVPlayerItemWithURL:(id)arg1 options:(id)arg2;

@end
