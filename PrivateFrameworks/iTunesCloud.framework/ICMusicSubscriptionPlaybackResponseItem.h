
@interface ICMusicSubscriptionPlaybackResponseItem : NSObject <NSCopying> {
    NSDate * _assetExpirationDate;
    NSDictionary * _itemResponseDictionary;
    ICURLBag * _urlBag;
}

@property (nonatomic, copy) NSDate *assetExpirationDate;
@property (nonatomic, readonly, copy) NSArray *fileAssets;
@property (nonatomic, readonly, copy) ICStoreHLSAssetInfo *hlsAsset;
@property (nonatomic, readonly) long long storeAdamID;

- (void).cxx_destruct;
- (id)assetExpirationDate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)fileAssetWithFlavorType:(long long)arg1;
- (id)fileAssets;
- (id)hlsAsset;
- (id)initWithItemResponseDictionary:(id)arg1 urlBag:(id)arg2;
- (void)setAssetExpirationDate:(id)arg1;
- (long long)storeAdamID;

@end
