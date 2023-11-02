
@interface ADLKTTexturesDescriptor : NSObject {
    NSArray * _derivitivesDescriptors;
    NSArray * _featuresDescriptors;
    ADImageDescriptor * _inputDescriptor;
    struct { 
        unsigned long long scales; 
        NSMutableArray *nwarpings; 
        bool useNonLocalRegularization; 
        int nlreg_radius; 
        int nlreg_padding; 
        float nlreg_sigma_l; 
        float nlreg_sigma_c; 
        float nlreg_sigma_w; 
    }  _opticalFlowConfig;
    NSArray * _pyramidsDescriptors;
    unsigned long long  _scales;
    ADImageDescriptor * _shiftmapDescriptor;
}

@property (nonatomic, readonly) NSArray *derivitivesDescriptors;
@property (nonatomic, readonly) NSArray *featuresDescriptors;
@property (nonatomic, readonly) ADImageDescriptor *inputDescriptor;
@property (nonatomic, readonly) struct { unsigned long long x1; id x2; bool x3; int x4; int x5; float x6; float x7; float x8; } opticalFlowConfig;
@property (nonatomic, readonly) NSArray *pyramidsDescriptors;
@property (nonatomic, readonly) unsigned long long scales;
@property (nonatomic, readonly) ADImageDescriptor *shiftmapDescriptor;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)derivitivesDescriptors;
- (id)featuresDescriptors;
- (id)initForSupportedSizes:(id)arg1 config:(struct { unsigned long long x1; id x2; bool x3; int x4; int x5; float x6; float x7; float x8; })arg2;
- (id)inputDescriptor;
- (struct CGSize { double x1; double x2; })inputSizeForLayout:(unsigned long long)arg1;
- (struct { unsigned long long x1; id x2; bool x3; int x4; int x5; float x6; float x7; float x8; })opticalFlowConfig;
- (id)pyramidsDescriptors;
- (unsigned long long)scales;
- (id)shiftmapDescriptor;

@end
