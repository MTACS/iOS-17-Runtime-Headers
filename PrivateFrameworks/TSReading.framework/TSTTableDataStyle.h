
@interface TSTTableDataStyle : TSTTableDataObject {
    TSSStyle * mStyle;
}

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initObjectWithStyle:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
