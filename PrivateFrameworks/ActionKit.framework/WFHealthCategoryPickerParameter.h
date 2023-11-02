
@interface WFHealthCategoryPickerParameter : WFEnumerationParameter {
    HKCategoryType * _categoryType;
    NSArray * _possibleStates;
}

@property (nonatomic, retain) HKCategoryType *categoryType;

- (void).cxx_destruct;
- (id)categoryType;
- (bool)isHidden;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)possibleStates;
- (void)setCategoryType:(id)arg1;
- (void)updatePossibleStates;

@end
