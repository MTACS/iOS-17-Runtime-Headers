
@interface ECFormulaProcessor : NSObject {
    void * mLassoSheetNames;
    void * mXlFormulaProcessorLasso;
    void * mXlFormulaProcessorXl;
    void * mXlLinkTable;
    void * mXlNameTable;
    void * mXlSheetNames;
}

+ (id)formulaStringForEDFormula:(id)arg1 edWorksheet:(id)arg2 xlFormulaProcessor:(void*)arg3;

- (void)dealloc;
- (id)init;
- (void)setupWithWorkbook:(id)arg1;
- (void*)setupWithWorkbook:(id)arg1 xlNameTable:(void*)arg2 sheetNames:(void*)arg3 xlLinkTable:(void*)arg4 lassoSyntax:(bool)arg5;
- (void*)sheetNamesFromWorkbook:(id)arg1;
- (void*)xlFormulaProcessorLasso;
- (void*)xlFormulaProcessorXl;

@end
