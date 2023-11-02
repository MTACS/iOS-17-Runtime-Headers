
@interface MLCTensorParameter : NSObject {
    MLCDevice * _device;
    bool  _isUpdatable;
    MLCTensor * _tensor;
}

@property (nonatomic, retain) MLCDevice *device;
@property (nonatomic) bool isUpdatable;
@property (nonatomic, readonly, retain) MLCTensor *tensor;

+ (id)parameterWithTensor:(id)arg1;
+ (id)parameterWithTensor:(id)arg1 optimizerData:(id)arg2;

- (void).cxx_destruct;
- (bool)allocateDataForOptimizer:(id)arg1 device:(id)arg2 isVector:(bool)arg3;
- (id)device;
- (id)initWithTensor:(id)arg1 optimizerData:(id)arg2;
- (bool)isUpdatable;
- (void)setDevice:(id)arg1;
- (void)setIsUpdatable:(bool)arg1;
- (id)tensor;

@end
