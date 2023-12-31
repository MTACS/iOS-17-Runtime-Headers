
@interface EDName : NSObject {
    EDFormula * _formula;
    NSString * _formulaString;
    OITSUPointerKeyDictionary * _maxWorksheetReferences;
    EDString * _nameString;
    unsigned long long  _sheetIndex;
}

@property (nonatomic, readonly) EDFormula *formula;
@property (nonatomic, readonly) NSString *internalFunctionName;
@property (nonatomic, readonly) bool isInternalFunction;
@property (nonatomic, readonly) OITSUPointerKeyDictionary *maxWorksheetReferences;
@property (nonatomic, retain) EDString *nameString;
@property (nonatomic) unsigned long long sheetIndex;

+ (id)name;

- (void).cxx_destruct;
- (id)description;
- (id)formula;
- (id)formulaString;
- (unsigned long long)hash;
- (id)init;
- (id)internalFunctionName;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEDName:(id)arg1;
- (bool)isEqualToString:(id)arg1;
- (bool)isInternalFunction;
- (id)maxWorksheetReferences;
- (id)nameString;
- (void)setFormula:(id)arg1 workbook:(id)arg2;
- (void)setFormulaString:(id)arg1 workbook:(id)arg2;
- (void)setNameString:(id)arg1;
- (void)setSheetIndex:(unsigned long long)arg1;
- (unsigned long long)sheetIndex;

@end
