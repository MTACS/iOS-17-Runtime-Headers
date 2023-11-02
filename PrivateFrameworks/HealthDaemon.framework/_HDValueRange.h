
@interface _HDValueRange : NSObject {
    bool  _isMaximumInclusive;
    bool  _isMinimumInclusive;
    double  _maximum;
    double  _minimum;
}

@property (nonatomic) bool isMaximumInclusive;
@property (nonatomic) bool isMinimumInclusive;
@property (nonatomic) double maximum;
@property (nonatomic) double minimum;

- (bool)contains:(double)arg1;
- (id)initWithMinimum:(double)arg1 maximum:(double)arg2 isMinimumInclusive:(bool)arg3 isMaximumInclusive:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isMaximumInclusive;
- (bool)isMinimumInclusive;
- (double)maximum;
- (double)minimum;
- (void)setIsMaximumInclusive:(bool)arg1;
- (void)setIsMinimumInclusive:(bool)arg1;
- (void)setMaximum:(double)arg1;
- (void)setMinimum:(double)arg1;

@end
