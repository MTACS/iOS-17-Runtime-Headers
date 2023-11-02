
@interface TSTTableDataMultipleChoiceList : TSTTableDataObject {
    TSTPopUpMenuModel * mPopUpMenuModel;
}

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initObjectWithPopUpMenuModel:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
