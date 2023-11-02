
@interface TSTTableDataConditionalStyleSet : TSTTableDataObject {
    TSTConditionalStyleSet * mConditionalStyleSet;
}

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initObjectWithConditionalStyleSet:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
