
@interface AVTStickerShaderModifier : NSObject {
    NSString * _data;
    NSDictionary * _dictionary;
    NSString * _entryPoint;
    bool  _forceDoubleSided;
    bool  _isCropShaderModifier;
    id  _nodeNames;
    NSArray * _properties;
}

@property (nonatomic, readonly) NSString *data;
@property (nonatomic, retain) NSDictionary *dictionary;
@property (nonatomic, readonly) NSString *entryPoint;
@property (nonatomic, readonly) bool forceDoubleSided;
@property (nonatomic, readonly) id nodeNames;
@property (nonatomic, readonly) NSArray *properties;

+ (id)encapsulateShaderData:(id)arg1;
+ (id)entryPointForModifierName:(id)arg1;
+ (id)shaderModifierCache;
+ (id)shaderModifierFromDictionary:(id)arg1 assetsPath:(id)arg2;

- (void).cxx_destruct;
- (void)applyToAllMaterialsOfNode:(id)arg1 options:(id)arg2 reversionContext:(id)arg3;
- (void)applyToMaterial:(id)arg1 options:(id)arg2 reversionContext:(id)arg3;
- (void)applyToMaterialsOfMatchedNodesInHierarchy:(id)arg1 options:(id)arg2 reversionContext:(id)arg3;
- (id)cloneWithProperties:(id)arg1;
- (id)data;
- (id)description;
- (id)dictionary;
- (id)dictionaryWithTargetPath:(id)arg1;
- (id)entryPoint;
- (bool)forceDoubleSided;
- (id)initWithEntryPoint:(id)arg1 nodeNames:(id)arg2 data:(id)arg3 properties:(id)arg4 forceDoubleSided:(bool)arg5;
- (id)nodeNames;
- (id)properties;
- (void)setDictionary:(id)arg1;

@end
