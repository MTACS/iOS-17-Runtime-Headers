
@interface RMModelAssetReference : NSObject {
    NSArray * _assetTypes;
    NSString * _identifier;
}

@property (nonatomic, readonly, copy) NSArray *assetTypes;
@property (nonatomic, readonly, copy) NSString *identifier;

- (void).cxx_destruct;
- (id)assetTypes;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 assetTypes:(id)arg2;

@end
