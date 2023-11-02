
@interface AXMChartDescriptor : NSObject <AXMChartDictionaryRepresentable, NSCopying> {
    NSArray * _additionalAxes;
    NSArray * _annotations;
    NSAttributedString * _attributedTitle;
    long long  _contentDirection;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentFrame;
    AXMNumericDataAxisDescriptor * _durationAxisDescriptor;
    AXMNumericDataAxisDescriptor * _pitchAxisDescriptor;
    NSArray * _series;
    NSString * _summary;
    AXMCategoricalDataAxisDescriptor * _timbreAxisDescriptor;
    AXMCategoricalDataAxisDescriptor * _timeCategoricalAxisDescriptor;
    AXMNumericDataAxisDescriptor * _timeNumericAxisDescriptor;
    AXMNumericDataAxisDescriptor * _volumeAxisDescriptor;
    <AXMDataAxisDescriptor> * _xAxis;
    AXMNumericDataAxisDescriptor * _yAxis;
}

@property (nonatomic, copy) NSArray *additionalAxes;
@property (nonatomic, copy) NSArray *annotations;
@property (nonatomic, copy) NSAttributedString *attributedTitle;
@property (nonatomic) long long contentDirection;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentFrame;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) AXMNumericDataAxisDescriptor *durationAxisDescriptor;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AXMNumericDataAxisDescriptor *pitchAxisDescriptor;
@property (nonatomic, copy) NSArray *series;
@property (nonatomic, copy) NSString *summary;
@property (readonly) Class superclass;
@property (nonatomic, readonly) AXMCategoricalDataAxisDescriptor *timbreAxisDescriptor;
@property (nonatomic, readonly) <AXMDataAxisDescriptor> *timeAxisDescriptor;
@property (nonatomic, readonly) AXMCategoricalDataAxisDescriptor *timeCategoricalAxisDescriptor;
@property (nonatomic, readonly) AXMNumericDataAxisDescriptor *timeNumericAxisDescriptor;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) AXMNumericDataAxisDescriptor *volumeAxisDescriptor;
@property (nonatomic, retain) <AXMDataAxisDescriptor> *xAxis;
@property (nonatomic, retain) AXMNumericDataAxisDescriptor *yAxis;

- (void).cxx_destruct;
- (void)_commonInitWithSummary:(id)arg1 xAxisDescriptor:(id)arg2 yAxisDescriptor:(id)arg3 additionalAxes:(id)arg4 series:(id)arg5;
- (id)additionalAxes;
- (id)annotations;
- (id)attributedTitle;
- (long long)contentDirection;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentFrame;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)durationAxisDescriptor;
- (void)generateDataSummariesWithCompletion:(id /* block */)arg1;
- (id)initWithAttributedTitle:(id)arg1 summary:(id)arg2 xAxisDescriptor:(id)arg3 yAxisDescriptor:(id)arg4 additionalAxes:(id)arg5 series:(id)arg6;
- (id)initWithAttributedTitle:(id)arg1 summary:(id)arg2 xAxisDescriptor:(id)arg3 yAxisDescriptor:(id)arg4 series:(id)arg5;
- (id)initWithDictionary:(id)arg1;
- (id)initWithTitle:(id)arg1 summary:(id)arg2 xAxisDescriptor:(id)arg3 yAxisDescriptor:(id)arg4 additionalAxes:(id)arg5 series:(id)arg6;
- (id)initWithTitle:(id)arg1 summary:(id)arg2 xAxisDescriptor:(id)arg3 yAxisDescriptor:(id)arg4 series:(id)arg5;
- (id)pitchAxisDescriptor;
- (id)series;
- (void)setAdditionalAxes:(id)arg1;
- (void)setAnnotations:(id)arg1;
- (void)setAttributedTitle:(id)arg1;
- (void)setContentDirection:(long long)arg1;
- (void)setContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSeries:(id)arg1;
- (void)setSummary:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setXAxis:(id)arg1;
- (void)setYAxis:(id)arg1;
- (id)summary;
- (id)timbreAxisDescriptor;
- (id)timeAxisDescriptor;
- (id)timeCategoricalAxisDescriptor;
- (id)timeNumericAxisDescriptor;
- (id)title;
- (id)volumeAxisDescriptor;
- (id)xAxis;
- (id)yAxis;
- (id)zCategoricalAxisDescriptor;
- (id)zNumericAxisDescriptor;

@end
