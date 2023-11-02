
@interface NUNIAegirTextureGroup : NSObject {
    NSArray * _albedos;
    NSArray * _cloudsHi;
    NSArray * _cloudsLo;
    NSArray * _cloudsMd;
    NSArray * _emissives;
    NSArray * _gradients;
    NSArray * _normals;
    CLKUITexture * _starfield;
}

@property (nonatomic, retain) NSArray *albedos;
@property (nonatomic, retain) NSArray *cloudsHi;
@property (nonatomic, retain) NSArray *cloudsLo;
@property (nonatomic, retain) NSArray *cloudsMd;
@property (nonatomic, retain) NSArray *emissives;
@property (nonatomic, retain) NSArray *gradients;
@property (nonatomic, retain) NSArray *normals;
@property (nonatomic, retain) CLKUITexture *starfield;

- (void).cxx_destruct;
- (id)albedos;
- (id)cloudsHi;
- (id)cloudsLo;
- (id)cloudsMd;
- (id)emissives;
- (id)gradients;
- (id)normals;
- (void)setAlbedos:(id)arg1;
- (void)setCloudsHi:(id)arg1;
- (void)setCloudsLo:(id)arg1;
- (void)setCloudsMd:(id)arg1;
- (void)setEmissives:(id)arg1;
- (void)setGradients:(id)arg1;
- (void)setNormals:(id)arg1;
- (void)setStarfield:(id)arg1;
- (id)starfield;

@end
