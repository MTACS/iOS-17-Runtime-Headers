
@interface PXCollectionsDataSourceChangeDetails : PXSectionedDataSourceChangeDetails {
    bool  _countUpdateChange;
}

@property (getter=isCountUpdateChange, nonatomic) bool countUpdateChange;

- (bool)isCountUpdateChange;
- (void)setCountUpdateChange:(bool)arg1;

@end
