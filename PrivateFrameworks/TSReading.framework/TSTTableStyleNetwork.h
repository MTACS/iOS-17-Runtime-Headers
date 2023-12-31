
@interface TSTTableStyleNetwork : TSPObject <NSFastEnumeration> {
    TSTCellStyle * mBodyCellStyle;
    TSWPParagraphStyle * mBodyTextStyle;
    TSTCellStyle * mFooterRowCellStyle;
    TSWPParagraphStyle * mFooterRowTextStyle;
    TSTCellStyle * mHeaderColumnCellStyle;
    TSWPParagraphStyle * mHeaderColumnTextStyle;
    TSTCellStyle * mHeaderRowCellStyle;
    TSWPParagraphStyle * mHeaderRowTextStyle;
    unsigned long long  mPresetIndex;
    TSWPShapeStyle * mTableNameShapeStyle;
    TSWPParagraphStyle * mTableNameStyle;
    TSTTableStyle * mTableStyle;
}

@property (nonatomic, readonly) TSTCellStyle *bodyCellStyle;
@property (nonatomic, readonly) TSWPParagraphStyle *bodyTextStyle;
@property (nonatomic, readonly) TSTCellStyle *footerRowCellStyle;
@property (nonatomic, readonly) TSWPParagraphStyle *footerRowTextStyle;
@property (nonatomic, readonly) TSTCellStyle *headerColumnCellStyle;
@property (nonatomic, readonly) TSWPParagraphStyle *headerColumnTextStyle;
@property (nonatomic, readonly) TSTCellStyle *headerRowCellStyle;
@property (nonatomic, readonly) TSWPParagraphStyle *headerRowTextStyle;
@property (nonatomic) unsigned long long presetIndex;
@property (nonatomic, retain) TSWPShapeStyle *tableNameShapeStyle;
@property (nonatomic, retain) TSWPParagraphStyle *tableNameStyle;
@property (nonatomic, retain) TSTTableStyle *tableStyle;

+ (id)createStylesInStylesheet:(id)arg1 presetIndex:(unsigned long long)arg2 colors:(id)arg3 alternate:(int)arg4;
+ (id)defaultTableNameShapeStyleWithContext:(id)arg1;
+ (id)identifiersForPresetIndex:(unsigned long long)arg1;
+ (id)networkFromStylesheet:(id)arg1 presetIndex:(unsigned long long)arg2;
+ (id)networkFromTableModel:(id)arg1;
+ (id)networkFromTheme:(id)arg1 presetIndex:(unsigned long long)arg2;
+ (id)networkWithContext:(id)arg1 presetIndex:(unsigned long long)arg2 colors:(id)arg3 alternate:(int)arg4;
+ (id)tableNameShapeStyleIDForPreset:(unsigned long long)arg1;
+ (id)tableNameStyleIDForPreset:(unsigned long long)arg1;

- (id)bodyCellStyle;
- (id)bodyTextStyle;
- (id)cellStyleForTableArea:(unsigned int)arg1;
- (id)copy;
- (id)copyWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1 context:(id)arg2;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)dictionaryWithPreset:(unsigned long long)arg1;
- (id)footerRowCellStyle;
- (id)footerRowTextStyle;
- (unsigned long long)hash;
- (id)headerColumnCellStyle;
- (id)headerColumnTextStyle;
- (id)headerRowCellStyle;
- (id)headerRowTextStyle;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 fromArray:(id)arg2 presetIndex:(unsigned long long)arg3;
- (id)initWithContext:(id)arg1 fromDictionary:(id)arg2 withPreset:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned long long)presetIndex;
- (void)setBodyCellStyle:(id)arg1;
- (void)setBodyTextStyle:(id)arg1;
- (void)setCellStyle:(id)arg1 forTableArea:(unsigned int)arg2;
- (void)setFooterRowCellStyle:(id)arg1;
- (void)setFooterRowTextStyle:(id)arg1;
- (void)setHeaderColumnCellStyle:(id)arg1;
- (void)setHeaderColumnTextStyle:(id)arg1;
- (void)setHeaderRowCellStyle:(id)arg1;
- (void)setHeaderRowTextStyle:(id)arg1;
- (void)setPresetIndex:(unsigned long long)arg1;
- (void)setStylesFromTableModel:(id)arg1;
- (void)setTableNameShapeStyle:(id)arg1;
- (void)setTableNameStyle:(id)arg1;
- (void)setTableStyle:(id)arg1;
- (void)setTextStyle:(id)arg1 forTableArea:(unsigned int)arg2;
- (id)styleArray;
- (bool)stylesInStylesheet:(id)arg1;
- (id)tableNameShapeStyle;
- (id)tableNameStyle;
- (id)tableStyle;
- (id)textStyleForTableArea:(unsigned int)arg1;
- (bool)valid;

@end
