
@interface AVTStickerMorpherOverride : NSObject {
    NSString * _morphTargetName;
    id  _nodeNames;
    float  _weight;
}

@property (nonatomic, readonly, copy) NSString *morphTargetName;
@property (nonatomic, readonly, copy) id nodeNames;
@property (nonatomic, readonly) float weight;

+ (id)morpherOverrideFromDictionary:(id)arg1;

- (void).cxx_destruct;
- (void)applyToHierarchy:(id)arg1 reversionContext:(id)arg2;
- (id)description;
- (id)initWithNodeNames:(id)arg1 morphTargetName:(id)arg2 weight:(float)arg3;
- (id)morphTargetName;
- (id)nodeNames;
- (float)weight;

@end
