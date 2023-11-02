
@interface OADTableCellStyle : NSObject {
    OADTableCellBorderStyle * mBorderStyle;
    OADFill * mFill;
}

+ (id)defaultFill;
+ (id)defaultStyle;

- (void).cxx_destruct;
- (void)applyOverridesFrom:(id)arg1;
- (id)borderStyle;
- (id)description;
- (id)fill;
- (void)setBorderStyle:(id)arg1;
- (void)setFill:(id)arg1;
- (id)shallowCopy;

@end
