
@interface AXDataPoint : NSObject <NSCopying> {
    NSArray * _additionalValues;
    NSAttributedString * _attributedLabel;
    NSString * _categoryEncodingValue;
    NSNumber * _durationEncodingValue;
    NSNumber * _pitchEncodingValue;
    NSNumber * _timeEncodingValue;
    NSString * _valueDescription;
    NSNumber * _volumeEncodingValue;
    AXDataPointValue * _xValue;
    AXDataPointValue * _yValue;
}

@property (nonatomic, copy) NSArray *additionalValues;
@property (nonatomic, copy) NSAttributedString *attributedLabel;
@property (nonatomic, copy) NSString *categoryEncodingValue;
@property (nonatomic, copy) NSNumber *durationEncodingValue;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSNumber *pitchEncodingValue;
@property (nonatomic, copy) NSNumber *timeEncodingValue;
@property (nonatomic, copy) NSString *valueDescription;
@property (nonatomic, copy) NSNumber *volumeEncodingValue;
@property (nonatomic, copy) AXDataPointValue *xValue;
@property (nonatomic, copy) AXDataPointValue *yValue;

- (void).cxx_destruct;
- (id)_additionalCategoricalValue;
- (id)_additionalNumericValue;
- (id)additionalValues;
- (id)attributedLabel;
- (id)categoryEncodingValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)durationEncodingValue;
- (id)initWithX:(id)arg1 y:(id)arg2;
- (id)initWithX:(id)arg1 y:(id)arg2 additionalValues:(id)arg3;
- (id)initWithX:(id)arg1 y:(id)arg2 additionalValues:(id)arg3 label:(id)arg4;
- (id)label;
- (id)pitchEncodingValue;
- (void)setAdditionalValues:(id)arg1;
- (void)setAttributedLabel:(id)arg1;
- (void)setCategoryEncodingValue:(id)arg1;
- (void)setDurationEncodingValue:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setPitchEncodingValue:(id)arg1;
- (void)setTimeEncodingValue:(id)arg1;
- (void)setValueDescription:(id)arg1;
- (void)setVolumeEncodingValue:(id)arg1;
- (void)setXValue:(id)arg1;
- (void)setYValue:(id)arg1;
- (id)timeEncodingValue;
- (id)valueDescription;
- (id)volumeEncodingValue;
- (id)xValue;
- (id)yValue;

@end
