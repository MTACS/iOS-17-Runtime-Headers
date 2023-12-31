
@interface EMColumnInfoMapper : CMMapper {
    unsigned long long  columnSpan;
    double  columnWidth;
    EDColumnInfo * edColumnInfo;
}

- (void).cxx_destruct;
- (double)columnWidth;
- (id)initWithDefaultWidth:(double)arg1 span:(unsigned long long)arg2 parent:(id)arg3;
- (id)initWithEDColumnInfo:(id)arg1 maxSpan:(unsigned long long)arg2 parent:(id)arg3;
- (void)mapAt:(id)arg1 withState:(id)arg2;

@end
