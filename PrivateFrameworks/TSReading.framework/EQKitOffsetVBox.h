
@interface EQKitOffsetVBox : EQKitVBox {
    double  mOffset;
}

@property (nonatomic, readonly) double offset;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithChildBoxes:(id)arg1;
- (id)initWithChildBoxes:(id)arg1 pivotIndex:(unsigned long long)arg2;
- (id)initWithChildBoxes:(id)arg1 pivotIndex:(unsigned long long)arg2 offset:(double)arg3;
- (bool)isEqual:(id)arg1;
- (double)offset;
- (void)p_cacheDimensionsForHeight:(double*)arg1 depth:(double*)arg2 width:(double*)arg3;

@end
