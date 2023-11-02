
@interface EDTableFilterColumn : NSObject {
    unsigned long long  mColumnIndex;
    NSMutableArray * mFilters;
    int  mFiltersRelation;
}

- (void).cxx_destruct;
- (void)addFilter:(id)arg1;
- (unsigned long long)columnIndex;
- (id)description;
- (id)filterAtIndex:(unsigned long long)arg1;
- (unsigned long long)filterCount;
- (int)filtersRelation;
- (id)init;
- (void)setColumnIndex:(unsigned long long)arg1;
- (void)setFiltersRelation:(int)arg1;

@end
