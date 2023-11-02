
@interface _LTDLanguageAssetCache : NSObject {
    NSMutableDictionary * _cache;
    bool  _isHot;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSSet * _requiredAssetIdentifiers;
}

@property (nonatomic, readonly) NSMutableDictionary *cache;
@property bool isHot;
@property (nonatomic, readonly) NSSet *requiredAssetIdentifiers;

+ (id)shared;

- (void).cxx_destruct;
- (id)_availableIdentifiers;
- (void)_hardReset;
- (id)_readAllAssets;
- (void)applyAssetUpdates:(id)arg1;
- (id)assetForIdentifier:(id)arg1;
- (id)assetForIdentifier:(id)arg1 createIfNotFound:(bool)arg2;
- (id)assetsFilteredUsing:(unsigned long long)arg1;
- (id)cache;
- (id)init;
- (bool)isCancelledDownloadComponent:(id)arg1;
- (bool)isHot;
- (id)preheatWithLanguages:(id)arg1;
- (id)requiredAssetIdentifiers;
- (void)reset;
- (void)setIsHot:(bool)arg1;
- (void)setRequiredAssets:(id)arg1;

@end
