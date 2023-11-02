
@interface CDMUAFClientManager : NSObject {
    UAFAssetSet * _assetSet;
    NSString * _assetSetName;
    NSDictionary * _usages;
}

@property (nonatomic, readonly) UAFAssetSet *assetSet;
@property (nonatomic, readonly) NSString *assetSetName;
@property (nonatomic, readonly) NSDictionary *usages;

- (void).cxx_destruct;
- (id)assetSet;
- (id)assetSetName;
- (id)description;
- (id)getAssetSet;
- (id)getLocale;
- (void)initUAFAssetSet;
- (id)initWithAssetSet:(id)arg1 usages:(id)arg2;
- (void)refreshUAFAssetSet;
- (void)setAssetSet:(id)arg1;
- (void)setLocale:(id)arg1;
- (bool)shouldInitUAFAssetSetInSetup;
- (id)usages;

@end
