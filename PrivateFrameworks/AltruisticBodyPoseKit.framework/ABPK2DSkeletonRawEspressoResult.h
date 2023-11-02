
@interface ABPK2DSkeletonRawEspressoResult : NSObject <ARResultData> {
    struct __CVBuffer { } * _affinityMapBuffer;
    void _affinityMapShape;
    void _affinityMapStrides;
    struct __CVBuffer { } * _heatMapBuffer;
    void _heatMapShape;
    void _heatMapStrides;
    ABPKMLImageData * _imageDataForNeuralNetwork;
    ABPKImageData * _inputImageData;
    long long  _rotationNeeded;
}

@property (nonatomic, readonly) struct __CVBuffer { }*affinityMapBuffer;
@property (nonatomic, readonly) void affinityMapShape;
@property (nonatomic, readonly) void affinityMapStrides;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct __CVBuffer { }*heatMapBuffer;
@property (nonatomic, readonly) void heatMapShape;
@property (nonatomic, readonly) void heatMapStrides;
@property (nonatomic, readonly) ABPKMLImageData *imageDataForNeuralNetwork;
@property (nonatomic, readonly) ABPKImageData *inputImageData;
@property (nonatomic, readonly) long long rotationNeeded;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct __CVBuffer { }*)affinityMapBuffer;
- (void)affinityMapShape;
- (void)affinityMapStrides;
- (void)dealloc;
- (struct __CVBuffer { }*)heatMapBuffer;
- (void)heatMapShape;
- (void)heatMapStrides;
- (id)imageDataForNeuralNetwork;
- (id)initWithHeatMapBuffer:(void *)arg1 heatMapShape:(void *)arg2 heatMapStrides:(void *)arg3 affinityMapBuffer:(void *)arg4 affinityMapShape:(void *)arg5 affinityMapStrides:(void *)arg6 rotationNeeded:(void *)arg7; // needs 7 arg types, found 3: struct __CVBuffer { }*, struct __CVBuffer { }*, long long
- (id)initWithHeatMapBuffer:(void *)arg1 heatMapShape:(void *)arg2 heatMapStrides:(void *)arg3 rotationNeeded:(void *)arg4; // needs 4 arg types, found 2: struct __CVBuffer { }*, long long
- (id)initWithMLImage:(void *)arg1 originalImageData:(void *)arg2 heatMapBuffer:(void *)arg3 heatMapShape:(void *)arg4 heatMapStrides:(void *)arg5 affinityMapBuffer:(void *)arg6 affinityMapShape:(void *)arg7 affinityMapStrides:(void *)arg8 rotationNeeded:(void *)arg9; // needs 9 arg types, found 5: id, id, struct __CVBuffer { }*, struct __CVBuffer { }*, long long
- (id)initWithMLImage:(void *)arg1 originalImageData:(void *)arg2 heatMapBuffer:(void *)arg3 heatMapShape:(void *)arg4 heatMapStrides:(void *)arg5 rotationNeeded:(void *)arg6; // needs 6 arg types, found 4: id, id, struct __CVBuffer { }*, long long
- (id)inputImageData;
- (long long)rotationNeeded;

@end
