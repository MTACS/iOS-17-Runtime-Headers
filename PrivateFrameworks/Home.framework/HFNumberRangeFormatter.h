
@interface HFNumberRangeFormatter : NSFormatter {
    bool  _consolidatesUnit;
    NSFormatter * _numberFormatter;
    bool  _simplifiesEqualValues;
}

@property (nonatomic) bool consolidatesUnit;
@property (nonatomic, retain) NSFormatter *numberFormatter;
@property (nonatomic) bool simplifiesEqualValues;

+ (id)_nonNumericCharacterSet;

- (void).cxx_destruct;
- (bool)_isRTL;
- (bool)_shouldRemoveUnitFromMaximumFormattedValue:(id)arg1;
- (bool)_shouldRemoveUnitFromMinimumFormattedValue:(id)arg1;
- (bool)consolidatesUnit;
- (id)initWithNumberFormatter:(id)arg1;
- (id)numberFormatter;
- (void)setConsolidatesUnit:(bool)arg1;
- (void)setNumberFormatter:(id)arg1;
- (void)setSimplifiesEqualValues:(bool)arg1;
- (bool)simplifiesEqualValues;
- (id)stringForNumberRange:(id)arg1;
- (id)stringForObjectValue:(id)arg1;

@end
