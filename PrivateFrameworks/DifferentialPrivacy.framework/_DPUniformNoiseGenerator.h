
@interface _DPUniformNoiseGenerator : NSObject {
    double  _minValue;
    double  _range;
}

@property (nonatomic, readonly) double minValue;
@property (nonatomic, readonly) double range;

+ (id)generatorWithValueRange:(id)arg1;

- (id)description;
- (id)init;
- (id)initWithValueRange:(id)arg1;
- (double)minValue;
- (double)range;
- (double)sample;

@end
