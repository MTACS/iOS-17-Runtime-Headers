
@interface GKConstantNoiseSource : GKNoiseSource {
    double  _value;
}

@property (nonatomic) double value;

+ (id)constantNoiseWithValue:(double)arg1;

- (id)cloneModule;
- (id)init;
- (id)initWithValue:(double)arg1;
- (void)setValue:(double)arg1;
- (double)value;
- (double)valueAt;

@end
