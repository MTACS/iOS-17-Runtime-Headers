
@interface _NTKPickedPhoto : NSObject {
    PHAsset * _asset;
    NTKPhoto * _photo;
    unsigned long long  _subsampleFactor;
}

@property (nonatomic, retain) PHAsset *asset;
@property (nonatomic, retain) NTKPhoto *photo;
@property (nonatomic) unsigned long long subsampleFactor;

- (void).cxx_destruct;
- (id)asset;
- (id)photo;
- (void)setAsset:(id)arg1;
- (void)setPhoto:(id)arg1;
- (void)setSubsampleFactor:(unsigned long long)arg1;
- (unsigned long long)subsampleFactor;

@end
