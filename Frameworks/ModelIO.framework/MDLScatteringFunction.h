
@interface MDLScatteringFunction : NSObject <MDLNamed> {
    MDLMaterialProperty * _ambientOcclusion;
    MDLMaterialProperty * _ambientOcclusionScale;
    MDLMaterialProperty * _baseColor;
    struct unique_ptr<ModelIO::BidirectionalScatteringDistributionFunction, std::default_delete<ModelIO::BidirectionalScatteringDistributionFunction>> { 
        struct __compressed_pair<ModelIO::BidirectionalScatteringDistributionFunction *, std::default_delete<ModelIO::BidirectionalScatteringDistributionFunction>> { 
            struct BidirectionalScatteringDistributionFunction {} *__value_; 
        } __ptr_; 
    }  _bsdf;
    MDLMaterialProperty * _emission;
    MDLMaterialProperty * _interfaceIndexOfRefraction;
    MDLMaterialProperty * _materialIndexOfRefraction;
    NSString * _name;
    MDLMaterialProperty * _normal;
    MDLMaterialProperty * _specular;
}

@property (nonatomic, readonly, retain) MDLMaterialProperty *ambientOcclusion;
@property (nonatomic, readonly, retain) MDLMaterialProperty *ambientOcclusionScale;
@property (nonatomic, readonly, retain) MDLMaterialProperty *baseColor;
@property (nonatomic, readonly, retain) MDLMaterialProperty *emission;
@property (nonatomic, readonly, retain) MDLMaterialProperty *interfaceIndexOfRefraction;
@property (nonatomic, readonly, retain) MDLMaterialProperty *materialIndexOfRefraction;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly, retain) MDLMaterialProperty *normal;
@property (nonatomic, readonly, retain) MDLMaterialProperty *specular;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)ambientOcclusion;
- (id)ambientOcclusionScale;
- (id)baseColor;
- (id)emission;
- (id)init;
- (id)interfaceIndexOfRefraction;
- (id)materialIndexOfRefraction;
- (id)name;
- (id)normal;
- (void)setName:(id)arg1;
- (id)specular;

@end
