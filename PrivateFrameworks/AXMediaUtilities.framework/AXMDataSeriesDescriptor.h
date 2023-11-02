
@interface AXMDataSeriesDescriptor : NSObject <AXMChartDictionaryRepresentable, NSCopying> {
    NSAttributedString * _attributedName;
    NSArray * _dataPoints;
    AXMDataSummary * _dataSummary;
    bool  _isContinuous;
    NSString * _meanValueDescription;
}

@property (nonatomic, readonly) NSArray *additionalCategoricalValues;
@property (nonatomic, readonly) NSArray *additionalNumericalValues;
@property (nonatomic, copy) NSAttributedString *attributedName;
@property (nonatomic, copy) NSArray *dataPoints;
@property (nonatomic, readonly) AXMDataSummary *dataSummary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isContinuous;
@property (nonatomic, readonly) double maximumDataValueOnTimeAxis;
@property (nonatomic, readonly) NSString *meanValueDescription;
@property (nonatomic, readonly) double minimumDataValueOnTimeAxis;
@property (nonatomic, copy) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *xValues;
@property (nonatomic, readonly) NSArray *yValues;

- (void).cxx_destruct;
- (void)_commonInitWithContinuous:(bool)arg1 dataPoints:(id)arg2;
- (id)_mutableArrayOfNSNullWithCount:(long long)arg1;
- (id)additionalCategoricalValues;
- (id)additionalNumericalValues;
- (id)attributedName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataPoints;
- (id)dataSummary;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithAttributedName:(id)arg1 isContinuous:(bool)arg2 dataPoints:(id)arg3;
- (id)initWithDictionary:(id)arg1;
- (id)initWithName:(id)arg1 isContinuous:(bool)arg2 dataPoints:(id)arg3;
- (bool)isContinuous;
- (double)maximumDataValueOnTimeAxis;
- (id)meanValueDescription;
- (double)minimumDataValueOnTimeAxis;
- (id)name;
- (id)numericalValuesFromDataPointValues:(id)arg1;
- (void)setAttributedName:(id)arg1;
- (void)setDataPoints:(id)arg1;
- (void)setDataSummary:(id)arg1;
- (void)setIsContinuous:(bool)arg1;
- (void)setName:(id)arg1;
- (id)xValues;
- (id)yValues;

@end
