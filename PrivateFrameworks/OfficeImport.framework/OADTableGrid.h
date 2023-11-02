
@interface OADTableGrid : NSObject {
    NSMutableArray * mColumns;
}

- (void).cxx_destruct;
- (id)addColumn;
- (id)columnAtIndex:(unsigned long long)arg1;
- (unsigned long long)columnCount;
- (id)description;
- (void)flipColumnsRTL;
- (id)init;

@end
