
@interface SRAssetConfiguration : NSObject {
    NSMutableDictionary * _assetTypeMap;
    NSMutableDictionary * _clientMap;
    NSMutableDictionary * _contentTypeMap;
    NSMutableDictionary * _properties;
}

+ (id)configuration;

- (void).cxx_destruct;
- (id)assetTypes;
- (void)clear;
- (id)contentTypesForClient:(id)arg1;
- (id)init;
- (void)setProperties:(id)arg1 client:(id)arg2;

@end
