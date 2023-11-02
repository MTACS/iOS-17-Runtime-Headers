
@interface TSTTableDataCustomFormat : TSTTableDataObject {
    void * mCustomFormat;
}

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initObjectWithCustomFormat:(void*)arg1;
- (bool)isEqual:(id)arg1;

@end
