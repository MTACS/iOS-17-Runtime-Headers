
@interface TSTTableDataString : TSTTableDataObject {
    NSString * mString;
}

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initObjectWithString:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
