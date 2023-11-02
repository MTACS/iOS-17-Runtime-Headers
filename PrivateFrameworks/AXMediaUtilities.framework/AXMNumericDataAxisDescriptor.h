
@interface AXMNumericDataAxisDescriptor : NSObject <AXMChartDictionaryRepresentable, AXMDataAxisDescriptor> {
    NSAttributedString * _attributedTitle;
    NSArray * _gridlinePositions;
    double  _lowerBound;
    AXMScale * _scale;
    long long  _scaleType;
    NSString * _title;
    double  _upperBound;
    id /* block */  _valueDescriptionProvider;
}

@property (nonatomic, copy) NSAttributedString *attributedTitle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *gridlinePositions;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCategoricalAxis;
@property (nonatomic) double lowerBound;
@property (nonatomic, retain) AXMScale *scale;
@property (nonatomic) long long scaleType;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) double upperBound;
@property (nonatomic, copy) id /* block */ valueDescriptionProvider;

- (void).cxx_destruct;
- (void)_commonInitWithLowerBound:(double)arg1 upperBound:(double)arg2 gridlinePositions:(id)arg3 valueDescriptionProvider:(id /* block */)arg4;
- (id)attributedTitle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)gridlinePositions;
- (id)initWithAttributedTitle:(id)arg1 lowerBound:(double)arg2 upperBound:(double)arg3 gridlinePositions:(id)arg4 valueDescriptionProvider:(id /* block */)arg5;
- (id)initWithDictionary:(id)arg1;
- (id)initWithTitle:(id)arg1 lowerBound:(double)arg2 upperBound:(double)arg3 gridlinePositions:(id)arg4 valueDescriptionProvider:(id /* block */)arg5;
- (bool)isCategoricalAxis;
- (double)lowerBound;
- (double)normalizedAxisValueForValue:(double)arg1;
- (id)scale;
- (long long)scaleType;
- (void)setAttributedTitle:(id)arg1;
- (void)setGridlinePositions:(id)arg1;
- (void)setLowerBound:(double)arg1;
- (void)setScale:(id)arg1;
- (void)setScaleType:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setUpperBound:(double)arg1;
- (void)setValueDescriptionProvider:(id /* block */)arg1;
- (id)title;
- (double)upperBound;
- (id /* block */)valueDescriptionProvider;

@end
