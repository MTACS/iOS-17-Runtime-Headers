
@interface AXChartDescriptor : NSObject <AXDictionaryRepresentable, NSCopying> {
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
    NSUUID * _identifier;
    NSArray * _series;
    NSString * _summary;
    <AXDataAxisDescriptor> * _xAxis;
    AXNumericDataAxisDescriptor * _yAxis;
}

@property (nonatomic, copy) NSArray *additionalAxes;
@property (nonatomic, copy) NSArray *annotations;
@property (nonatomic, copy) NSAttributedString *attributedTitle;
@property (nonatomic) long long contentDirection;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentFrame;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSArray *series;
@property (nonatomic, copy) NSString *summary;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) <AXDataAxisDescriptor> *xAxis;
@property (nonatomic, retain) AXNumericDataAxisDescriptor *yAxis;

- (void).cxx_destruct;
- (id)_additionalCategoricalAxis;
- (id)_additionalNumericAxis;
- (void)_commonInitWithSummary:(id)arg1 xAxisDescriptor:(id)arg2 yAxisDescriptor:(id)arg3 additionalAxes:(id)arg4 series:(id)arg5;
- (id)additionalAxes;
- (id)annotations;
- (id)attributedTitle;
- (void)computeValueDescriptionsIfNeeded;
- (long long)contentDirection;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentFrame;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)identifier;
- (id)initWithAttributedTitle:(id)arg1 summary:(id)arg2 xAxisDescriptor:(id)arg3 yAxisDescriptor:(id)arg4 additionalAxes:(id)arg5 series:(id)arg6;
- (id)initWithAttributedTitle:(id)arg1 summary:(id)arg2 xAxisDescriptor:(id)arg3 yAxisDescriptor:(id)arg4 series:(id)arg5;
- (id)initWithDictionary:(id)arg1;
- (id)initWithTitle:(id)arg1 summary:(id)arg2 xAxisDescriptor:(id)arg3 yAxisDescriptor:(id)arg4 additionalAxes:(id)arg5 series:(id)arg6;
- (id)initWithTitle:(id)arg1 summary:(id)arg2 xAxisDescriptor:(id)arg3 yAxisDescriptor:(id)arg4 series:(id)arg5;
- (id)series;
- (void)setAdditionalAxes:(id)arg1;
- (void)setAnnotations:(id)arg1;
- (void)setAttributedTitle:(id)arg1;
- (void)setContentDirection:(long long)arg1;
- (void)setContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIdentifier:(id)arg1;
- (void)setSeries:(id)arg1;
- (void)setSummary:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setXAxis:(id)arg1;
- (void)setYAxis:(id)arg1;
- (id)summary;
- (id)title;
- (id)xAxis;
- (id)yAxis;

@end
