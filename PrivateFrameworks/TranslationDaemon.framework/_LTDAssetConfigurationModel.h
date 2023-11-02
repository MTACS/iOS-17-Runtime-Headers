
@interface _LTDAssetConfigurationModel : NSObject {
    NSArray * _assetDirectoryNames;
    NSString * _config;
    NSDictionary * _root;
    NSArray * _speechEndpointAssetTypes;
    NSArray * _speechTranslationAssetTypes;
}

@property (nonatomic, readonly) NSArray *assetDirectoryNames;
@property (nonatomic, readonly) NSString *config;
@property (nonatomic, retain) NSDictionary *root;
@property (nonatomic, readonly) NSArray *speechEndpointAssetTypes;
@property (nonatomic, readonly) NSArray *speechTranslationAssetTypes;

- (void).cxx_destruct;
- (id)assetDirectoryNames;
- (id)config;
- (id)currentAssetDirectoryName;
- (id)currentEndpointAssetType;
- (id)currentSpeechTranslationAssetType;
- (id)debugDescription;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)root;
- (void)setRoot:(id)arg1;
- (id)speechEndpointAssetTypes;
- (id)speechTranslationAssetTypes;

@end
