
@interface IHKFilterSequence : NSObject {
    NSArray * _filterSeq;
    NSArray * _sliderOrder;
    NSDictionary * _sliderSpecs;
}

@property (retain) NSArray *filterSeq;
@property (retain) NSArray *sliderOrder;
@property (retain) NSDictionary *sliderSpecs;

+ (id)breakPascalCaseIntoWords:(id)arg1;
+ (id)getScalarInputsForCIFilterNamed:(id)arg1;
+ (id)paramToInputName:(id)arg1;
+ (id)parseFilterSequenceSpec:(id)arg1;
+ (id)uiNameForCIFilter:(id)arg1 paramName:(id)arg2;
+ (id)uiNameForCIFilterName:(id)arg1;
+ (id)uiNameForParamName:(id)arg1;

- (void).cxx_destruct;
- (id)applySliders:(id)arg1 image:(id)arg2 error:(id*)arg3;
- (id)filterSeq;
- (id)initWithFilterSpec:(id)arg1;
- (id)packageSliderValues:(id)arg1;
- (void)setFilterSeq:(id)arg1;
- (void)setSliderOrder:(id)arg1;
- (void)setSliderSpecs:(id)arg1;
- (id)sliderOrder;
- (id)sliderSpecs;

@end
