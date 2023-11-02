
@interface AXMDataPoint : NSObject <NSCopying> {
    NSArray * _additionalValues;
    NSAttributedString * _attributedLabel;
    NSNumber * _durationEncodingValue;
    NSNumber * _pitchEncodingValue;
    double  _playbackTimeOffsetMS;
    NSString * _timbreEncodingValue;
    AXMDataPointValue * _timeEncodingValue;
    NSString * _valueDescription;
    NSNumber * _volumeEncodingValue;
    AXMDataPointValue * _xValue;
    AXMDataPointValue * _yValue;
}

@property (nonatomic, copy) NSArray *additionalValues;
@property (nonatomic, copy) NSAttributedString *attributedLabel;
@property (nonatomic, copy) NSNumber *durationEncodingValue;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSNumber *pitchEncodingValue;
@property (nonatomic) double playbackTimeOffsetMS;
@property (nonatomic, copy) NSString *timbreEncodingValue;
@property (nonatomic, copy) AXMDataPointValue *timeEncodingValue;
@property (nonatomic, copy) NSString *valueDescription;
@property (nonatomic, copy) NSNumber *volumeEncodingValue;
@property (nonatomic, copy) AXMDataPointValue *xValue;
@property (nonatomic, copy) AXMDataPointValue *yValue;
@property (nonatomic, readonly) AXMDataPointValue *zCategoryAxisValue;
@property (nonatomic, readonly) AXMDataPointValue *zNumericAxisValue;

- (void).cxx_destruct;
- (id)additionalValues;
- (id)attributedLabel;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)durationEncodingValue;
- (id)initWithX:(id)arg1 y:(id)arg2;
- (id)initWithX:(id)arg1 y:(id)arg2 additionalValues:(id)arg3;
- (id)initWithX:(id)arg1 y:(id)arg2 additionalValues:(id)arg3 label:(id)arg4;
- (id)label;
- (id)pitchEncodingValue;
- (double)playbackTimeOffsetMS;
- (void)setAdditionalValues:(id)arg1;
- (void)setAttributedLabel:(id)arg1;
- (void)setDurationEncodingValue:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setPitchEncodingValue:(id)arg1;
- (void)setPlaybackTimeOffsetMS:(double)arg1;
- (void)setTimbreEncodingValue:(id)arg1;
- (void)setTimeEncodingValue:(id)arg1;
- (void)setValueDescription:(id)arg1;
- (void)setVolumeEncodingValue:(id)arg1;
- (void)setXValue:(id)arg1;
- (void)setYValue:(id)arg1;
- (id)timbreEncodingValue;
- (id)timeEncodingValue;
- (id)valueDescription;
- (id)volumeEncodingValue;
- (id)xValue;
- (id)yValue;
- (id)zCategoryAxisValue;
- (id)zNumericAxisValue;

@end
