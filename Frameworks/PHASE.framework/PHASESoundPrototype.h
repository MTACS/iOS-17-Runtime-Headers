
@interface PHASESoundPrototype : NSObject {
    NSString * _assetIdentifier;
    PHASEEngine * _engine;
    PHASESoundEventNodeAsset * _programmaticAPIAsset;
}

@property (copy) NSString *assetIdentifier;
@property (retain) NSString *assetUID;
@property (readonly) NSArray *mixerInformation;

+ (id)new;

- (void).cxx_destruct;
- (id)assetIdentifier;
- (id)assetUID;
- (void)deRegister;
- (void)dealloc;
- (id)init;
- (id)initWithEngine:(id)arg1 actionTreeRootNode:(id)arg2 error:(id*)arg3;
- (id)initWithEngine:(id)arg1 actionTreeRootNode:(id)arg2 outError:(id*)arg3;
- (id)initWithEngine:(id)arg1 registeredActionTreeIdentifier:(id)arg2 error:(id*)arg3;
- (id)initWithEngine:(id)arg1 registeredActionTreeUID:(id)arg2 outError:(id*)arg3;
- (id)mixerInformation;
- (void)setAssetIdentifier:(id)arg1;
- (void)setAssetUID:(id)arg1;

@end
