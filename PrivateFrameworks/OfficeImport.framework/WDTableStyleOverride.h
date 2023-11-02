
@interface WDTableStyleOverride : NSObject <NSCopying> {
    WDCharacterProperties * mCharacterProperties;
    unsigned int  mCharacterPropertiesOverridden;
    WDDocument * mDocument;
    WDParagraphProperties * mParagraphProperties;
    unsigned int  mParagraphPropertiesOverridden;
    int  mPart;
    WDStyle * mStyle;
    WDTableCellProperties * mTableCellStyleProperties;
    unsigned int  mTableCellStylePropertiesOverridden;
    WDTableRowProperties * mTableRowProperties;
    unsigned int  mTableRowPropertiesOverridden;
}

@property WDStyle *style;

- (void).cxx_destruct;
- (id)characterProperties;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithDocument:(id)arg1;
- (bool)isCharacterPropertiesOverridden;
- (bool)isParagraphPropertiesOverridden;
- (bool)isTableCellStylePropertiesOverridden;
- (bool)isTablePropertiesOverridden;
- (bool)isTableRowPropertiesOverridden;
- (id)mutableCharacterProperties;
- (id)mutableParagraphProperties;
- (id)mutableTableCellStyleProperties;
- (id)mutableTableRowProperties;
- (id)paragraphProperties;
- (int)part;
- (void)setCharacterPropertiesOverridden:(bool)arg1;
- (void)setParagraphPropertiesOverridden:(bool)arg1;
- (void)setPart:(int)arg1;
- (void)setStyle:(id)arg1;
- (void)setTableCellStylePropertiesOverridden:(bool)arg1;
- (void)setTableRowPropertiesOverridden:(bool)arg1;
- (id)style;
- (id)tableCellStyleProperties;
- (id)tableProperties;
- (id)tableRowProperties;

@end
