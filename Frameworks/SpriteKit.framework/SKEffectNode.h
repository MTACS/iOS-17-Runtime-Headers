
@interface SKEffectNode : SKNode <SKWarpable> {
    void * _skcEffectNode;
}

@property (nonatomic, copy) NSDictionary *attributeValues;
@property (nonatomic) long long blendMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CIFilter *filter;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SKShader *shader;
@property (nonatomic) bool shouldCenterFilter;
@property (nonatomic) bool shouldEnableEffects;
@property (nonatomic) bool shouldRasterize;
@property (nonatomic) long long subdivisionLevels;
@property (readonly) Class superclass;
@property (nonatomic, retain) SKWarpGeometry *warpGeometry;

+ (id)debugHierarchyPropertyDescriptions;
+ (id)debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id*)arg3 outError:(id*)arg4;
+ (bool)supportsSecureCoding;

- (void)_didMakeBackingNode;
- (void)_flippedChangedFrom:(bool)arg1 to:(bool)arg2;
- (void*)_makeBackingNode;
- (void)_scaleFactorChangedFrom:(float)arg1 to:(float)arg2;
- (long long)blendMode;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)filter;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqualToNode:(id)arg1;
- (void)setBlendMode:(long long)arg1;
- (void)setFilter:(id)arg1;
- (void)setShader:(id)arg1;
- (void)setShouldCenterFilter:(bool)arg1;
- (void)setShouldEnableEffects:(bool)arg1;
- (void)setShouldRasterize:(bool)arg1;
- (void)setSubdivisionLevels:(long long)arg1;
- (void)setValue:(id)arg1 forAttributeNamed:(id)arg2;
- (void)setWarpGeometry:(id)arg1;
- (id)shader;
- (bool)shouldCenterFilter;
- (bool)shouldEnableEffects;
- (bool)shouldRasterize;
- (long long)subdivisionLevels;
- (id)valueForAttributeNamed:(id)arg1;
- (id)warpGeometry;

@end
