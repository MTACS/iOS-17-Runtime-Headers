
@interface MPSGraphTensorData : MPSGraphObject {
    NSData * _data;
    unsigned int  _dataType;
    MPSGraphDevice * _device;
    struct __IOSurface { } * _iosurface;
    NSString * _label;
    NSArray * _mpsimagebatch;
    MPSNDArray * _mpsndarray;
    unsigned long long  _numElements;
    unsigned long long  _rank;
    unsigned long long  _rowBytes;
    void _shapeValues;
    long long  _tensorDataType;
}

@property (nonatomic, readonly) unsigned int dataType;
@property (nonatomic, readonly) MPSGraphDevice *device;
@property (nonatomic, readonly) struct __IOSurface { }*iosurface;
@property (nonatomic, retain) NSString *label;
@property (nonatomic, readonly, copy) NSArray *shape;
@property (nonatomic, readonly) long long tensorDataType;

- (void).cxx_destruct;
- (id)checkTensorData:(const float*)arg1 nativeUlps:(float)arg2 absoluteErr:(float)arg3;
- (id)checkTensorData:(const float*)arg1 nativeUlps:(float)arg2 absoluteErr:(float)arg3 PSNR:(float)arg4;
- (id)checkWithReferenceTensorData:(id)arg1 nativeUlps:(float)arg2 absoluteError:(float)arg3 PSNR:(float)arg4;
- (void)commonInitialize;
- (void)copyDataFromNDArrayToImageBatchWithCommandBuffer:(id)arg1;
- (unsigned int)dataType;
- (void)dealloc;
- (id)debugDescription;
- (id)device;
- (id)initEmptyWithShape:(id)arg1 dataType:(unsigned int)arg2 device:(id)arg3;
- (id)initWithDevice:(id)arg1 IOSurface:(struct __IOSurface { }*)arg2 rowBytesAlignment:(unsigned long long)arg3 shape:(id)arg4 dataType:(unsigned int)arg5;
- (id)initWithDevice:(id)arg1 data:(id)arg2 shape:(id)arg3 dataType:(unsigned int)arg4;
- (id)initWithDevice:(id)arg1 rowBytesAlignment:(unsigned long long)arg2 shape:(id)arg3 dataType:(unsigned int)arg4;
- (id)initWithMPSImageBatch:(id)arg1;
- (id)initWithMPSMatrix:(id)arg1;
- (id)initWithMPSMatrix:(id)arg1 rank:(unsigned long long)arg2;
- (id)initWithMPSNDArray:(id)arg1;
- (id)initWithMPSNDArray:(id)arg1 device:(id)arg2;
- (id)initWithMPSVector:(id)arg1;
- (id)initWithMPSVector:(id)arg1 rank:(unsigned long long)arg2;
- (id)initWithMTLBuffer:(id)arg1 shape:(id)arg2 dataType:(unsigned int)arg3;
- (id)initWithMTLBuffer:(id)arg1 shape:(id)arg2 dataType:(unsigned int)arg3 rowBytes:(unsigned long long)arg4;
- (id)initWithMTLBuffer:(id)arg1 shape:(id)arg2 strideBytes:(id)arg3 dataType:(unsigned int)arg4;
- (id)initWithMTLBuffer:(id)arg1 shape:(id)arg2 strides:(id)arg3 dataType:(unsigned int)arg4;
- (id)initWithMTLBuffer:(id)arg1 shape:(id)arg2 strides:(id)arg3 interleaves:(id)arg4 dataType:(unsigned int)arg5;
- (struct __IOSurface { }*)iosurface;
- (id)label;
- (id)mpsndarray;
- (id)mpsndarrayWithCommandBuffer:(id)arg1;
- (void)print;
- (void)printIOSurface;
- (void)printNDArray;
- (void)setLabel:(id)arg1;
- (id)shape;
- (long long)tensorDataType;

@end
