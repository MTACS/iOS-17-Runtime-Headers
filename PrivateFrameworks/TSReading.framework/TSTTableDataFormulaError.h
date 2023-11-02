
@interface TSTTableDataFormulaError : TSTTableDataObject {
    TSWPStorage * mFormulaError;
}

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initObjectWithFormulaError:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
