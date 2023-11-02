
@interface AXMCategoricalDataAxisDescriptor : NSObject <AXMChartDictionaryRepresentable, AXMDataAxisDescriptor> {
    NSAttributedString * _attributedTitle;
    NSArray * _categoryOrder;
}

@property (nonatomic, copy) NSAttributedString *attributedTitle;
@property (nonatomic, copy) NSArray *categoryOrder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCategoricalAxis;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)attributedTitle;
- (id)categoryOrder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithAttributedTitle:(id)arg1 categoryOrder:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)initWithTitle:(id)arg1 categoryOrder:(id)arg2;
- (bool)isCategoricalAxis;
- (double)lowerBound;
- (double)normalizedAxisValueForValue:(id)arg1;
- (void)setAttributedTitle:(id)arg1;
- (void)setCategoryOrder:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (double)upperBound;

@end
