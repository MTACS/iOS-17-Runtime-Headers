
@interface OADTablePartStyle : NSObject {
    OADTableCellStyle * mCellStyle;
    OADTableTextStyle * mTextStyle;
}

+ (id)defaultStyle;

- (void).cxx_destruct;
- (void)applyOverridesFrom:(id)arg1;
- (id)cellStyle;
- (id)description;
- (void)setCellStyle:(id)arg1;
- (void)setTextStyle:(id)arg1;
- (id)shallowCopy;
- (id)textStyle;

@end
