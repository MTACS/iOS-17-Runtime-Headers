
@interface VCPFaceCrop : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _cachedImageDimensions;
    NSData * _faceCropData;
    NSString * _localIdentifier;
    VCPPhotosFace * _originatingFace;
    short  _state;
}

@property (nonatomic, readonly, copy) NSString *localIdentifier;
@property (nonatomic) short state;

+ (id)generateFaceCropsForFace:(id)arg1 resourceURL:(id)arg2 groupingIdentifier:(id)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)faceCropData;
- (struct CGSize { double x1; double x2; })imageDimensions;
- (id)initWithFaceCropData:(id)arg1 originatingFace:(id)arg2;
- (id)initWithLocalIdentifier:(id)arg1 faceCropData:(id)arg2;
- (id)localIdentifier;
- (id)originatingFace;
- (void)setState:(short)arg1;
- (short)state;

@end
