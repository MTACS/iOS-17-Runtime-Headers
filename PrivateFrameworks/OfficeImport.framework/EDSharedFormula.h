
@interface EDSharedFormula : EDFormula {
    unsigned long long  _baseFormulaIndex;
    EDReference * _baseFormulaRange;
    int  _columnBaseOrOffset;
    bool  _forceNonBaseFormula;
    int  _rowBaseOrOffset;
}

@property (nonatomic) unsigned long long baseFormulaIndex;
@property (nonatomic, readonly) EDReference *baseFormulaRange;
@property (nonatomic) int columnBaseOrOffset;
@property (nonatomic) bool forceNonBaseFormula;
@property (nonatomic) int rowBaseOrOffset;

- (void).cxx_destruct;
- (void)archiveByAppendingToMutableData:(struct __CFData { }*)arg1;
- (unsigned long long)baseFormulaIndex;
- (id)baseFormulaRange;
- (id)baseFormulaWithRowBlocks:(id)arg1;
- (int)columnBaseOrOffset;
- (bool)convertTokensToShared;
- (id)description;
- (bool)forceNonBaseFormula;
- (id)init;
- (id)initWithFormula:(id)arg1;
- (bool)isBaseFormula;
- (bool)isSharedFormula;
- (int)rowBaseOrOffset;
- (void)setBaseFormulaIndex:(unsigned long long)arg1;
- (void)setColumnBaseOrOffset:(int)arg1;
- (void)setForceNonBaseFormula:(bool)arg1;
- (void)setRowBaseOrOffset:(int)arg1;
- (void)unarchiveFromData:(struct __CFData { }*)arg1 offset:(unsigned long long*)arg2;
- (void)updateBaseFormulaRangeWithRow:(int)arg1 column:(int)arg2;
- (id)warningWithRowBlocks:(id)arg1;

@end
