
@interface TKPickerSectionItem : TKPickerItem {
    NSString * _footerText;
    NSString * _text;
}

@property (setter=_setFooterText:, nonatomic, copy) NSString *footerText;
@property (setter=_setText:, nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (void)_appendDescriptionOfAttributesToString:(id)arg1;
- (void)_setFooterText:(id)arg1;
- (void)_setText:(id)arg1;
- (id)footerText;
- (id)text;

@end
