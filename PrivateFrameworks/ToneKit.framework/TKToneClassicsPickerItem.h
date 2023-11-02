
@interface TKToneClassicsPickerItem : TKTonePickerItem {
    long long  _classicToneIndex;
    TKTonePickerItem * _parentItem;
}

@property (setter=_setClassicToneIndex:, nonatomic) long long classicToneIndex;
@property (setter=_setParentItem:, nonatomic) TKTonePickerItem *parentItem;

- (void).cxx_destruct;
- (void)_appendDescriptionOfAttributesToString:(id)arg1;
- (void)_setClassicToneIndex:(long long)arg1;
- (void)_setParentItem:(id)arg1;
- (id)childItemAtIndex:(long long)arg1;
- (long long)classicToneIndex;
- (id)parentItem;

@end
