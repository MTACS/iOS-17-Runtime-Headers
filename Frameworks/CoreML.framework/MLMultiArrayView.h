
@interface MLMultiArrayView : MLMultiArray {
    MLMultiArray * _parent;
}

@property (nonatomic, readonly) MLMultiArray *parent;

+ (bool)isSqueezableShape:(id)arg1;
+ (bool)isSqueezableShape:(id)arg1 dimensions:(id)arg2;
+ (void)squeezeShape:(id)arg1 strides:(id)arg2 resultingShape:(id*)arg3 resultingStrides:(id*)arg4;

- (void).cxx_destruct;
- (id)initExpandingDimensionsOfMultiArray:(id)arg1 axis:(long long)arg2;
- (id)initSlicingMultiArray:(id)arg1 origin:(id)arg2 shape:(id)arg3 squeeze:(bool)arg4 error:(id*)arg5;
- (id)initSqueezingMultiArray:(id)arg1 dimensions:(id)arg2 error:(id*)arg3;
- (id)parent;

@end
