
@interface VNInstanceMaskObservation : VNObservation {
    struct __CVBuffer { } * _instanceMask;
    _VNLowResAlphaMask * _lowResAlphaMask;
    _VNInstanceMaskObservationMaskProductionResources * _maskProductionResources_DO_NOT_DIRECTLY_ACCESS;
    unsigned long long  _numComponents;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _regionOfInterest;
}

@property (readonly, copy) NSIndexSet *allInstances;
@property (nonatomic, readonly) struct __CVBuffer { }*instanceMask;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allInstances;
- (struct __CVBuffer { }*)createMaskForInstances:(id)arg1 error:(id*)arg2;
- (struct __CVBuffer { }*)createMatteForImageForInstances:(id)arg1 fromRequestHandler:(id)arg2 error:(id*)arg3;
- (struct __CVBuffer { }*)createMattedImageForInstances:(id)arg1 fromRequestHandler:(id)arg2 inPlace:(bool)arg3 croppedToInstancesExtent:(bool)arg4 error:(id*)arg5;
- (struct __CVBuffer { }*)createMattedImageOfInstances:(id)arg1 fromRequestHandler:(id)arg2 croppedToInstancesExtent:(bool)arg3 error:(id*)arg4;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (struct __CVBuffer { }*)generateMaskForInstances:(id)arg1 error:(id*)arg2;
- (struct __CVBuffer { }*)generateMaskedImageOfInstances:(id)arg1 fromRequestHandler:(id)arg2 croppedToInstancesExtent:(bool)arg3 error:(id*)arg4;
- (struct __CVBuffer { }*)generateMaskedImageOfInstances:(id)arg1 fromRequestHandler:(id)arg2 inPlace:(bool)arg3 croppedToInstancesExtent:(bool)arg4 error:(id*)arg5;
- (struct __CVBuffer { }*)generateScaledMaskForImageForInstances:(id)arg1 fromRequestHandler:(id)arg2 error:(id*)arg3;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithOriginatingRequestSpecifier:(id)arg1 instanceLowResMaskArray:(id)arg2 instanceMask:(struct __CVBuffer { }*)arg3 numComponents:(unsigned long long)arg4 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5;
- (id)initWithOriginatingRequestSpecifier:(id)arg1 lowResMask:(struct __CVBuffer { }*)arg2 instanceMask:(struct __CVBuffer { }*)arg3 numComponents:(unsigned long long)arg4 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5;
- (struct __CVBuffer { }*)instanceMask;
- (bool)isEqual:(id)arg1;
- (id)vn_cloneObject;

@end
