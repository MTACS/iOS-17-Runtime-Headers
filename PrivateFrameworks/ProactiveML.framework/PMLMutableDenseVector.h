
@interface PMLMutableDenseVector : PMLDenseVector <NSCopying, NSMutableCopying> {
    NSMutableData * _mutableData;
}

@property (nonatomic, readonly) NSMutableData *mutableData;
@property (nonatomic, readonly) float*mutablePtr;

// Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML

- (void).cxx_destruct;
- (void)append:(float)arg1;
- (void)append:(const float*)arg1 count:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithMutableData:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableData;
- (float*)mutablePtr;
- (void)processValuesInPlaceWithBlock:(id /* block */)arg1;
- (void)scaleInPlaceWithFactor:(float)arg1;
- (void)scaleInPlaceWithInversedFactor:(float)arg1;
- (void)sumInPlaceWithVector:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal

- (bool)isEqual:(id)arg1;
- (bool)isEqualToPMLMutableDenseVector:(id)arg1;

@end
