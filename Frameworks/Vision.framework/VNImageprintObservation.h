
@interface VNImageprintObservation : VNObservation {
    VNImageprint * _imageprint;
    bool  _imageprintValid;
    NSString * _imageprintVersion;
}

@property (nonatomic, retain) VNImageprint *imageprint;
@property (nonatomic, readonly) bool imageprintValid;
@property (nonatomic, readonly, copy) NSString *imageprintVersion;
@property (nonatomic, readonly) NSData *rawImageprintDescriptor;

+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)arg1;
+ (id)observationWithImageprint:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (float)calculateDistanceFromImageprintObservation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)imageprint;
- (bool)imageprintValid;
- (id)imageprintVersion;
- (id)initWithCoder:(id)arg1;
- (id)initWithRawImageprintDescriptor:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isImageprintValid;
- (id)rawImageprintDescriptor;
- (void)setImageprint:(id)arg1;
- (id)vn_cloneObject;

@end
