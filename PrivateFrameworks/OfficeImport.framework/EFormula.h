
@interface EFormula : NSObject {
    NSString * mErrMsg;
    EDFormula * mFormula;
    Class  mFormulaClass;
    <EFHelper> * mHelper;
    EFTableData * mTableData;
    void * mYylex;
}

+ (id)singletonEFormula;
+ (id)stringToFormula:(id)arg1 formulaHelper:(id)arg2 formulaClass:(Class)arg3;

- (void)dealloc;
- (Class)formulaClass;
- (id)formulaHelper;
- (unsigned long long)resolveFirstSheet:(id)arg1 lastSheet:(id)arg2;
- (unsigned long long)resolveName:(const char *)arg1;
- (unsigned long long)resolveSheet:(const char *)arg1 isCurrentSheet:(bool*)arg2;
- (id)resolveTable:(const char *)arg1 sheetIndex:(unsigned long long*)arg2;
- (void)setFormula:(id)arg1;
- (void)setFormulaClass:(Class)arg1;
- (void)setFormulaHelper:(id)arg1;
- (void)setTableData:(id)arg1;
- (id)stringToTokens:(id)arg1;
- (id)tableData;

@end
