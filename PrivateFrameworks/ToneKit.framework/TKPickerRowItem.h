
@interface TKPickerRowItem : TKPickerItem {
    long long  _row;
}

@property (setter=_setRow:, nonatomic) long long row;

- (void)_appendDescriptionOfAttributesToString:(id)arg1;
- (void)_setRow:(long long)arg1;
- (long long)row;

@end
