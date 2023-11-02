
@interface _SFPBLargeTitleDetailedRowCardSection : PBCodable <NSSecureCoding, _SFPBLargeTitleDetailedRowCardSection> {
    _SFPBColor * _backgroundColor;
    bool  _canBeHidden;
    bool  _hasBottomPadding;
    bool  _hasTopPadding;
    NSArray * _punchoutOptions;
    NSString * _punchoutPickerDismissText;
    NSString * _punchoutPickerTitle;
    int  _separatorStyle;
    _SFPBButtonItem * _subtitleButtonItem;
    _SFPBRichText * _title;
    NSArray * _trailingButtonItems;
    NSString * _type;
}

@property (nonatomic, retain) _SFPBColor *backgroundColor;
@property (nonatomic) bool canBeHidden;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasBottomPadding;
@property (nonatomic) bool hasTopPadding;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *punchoutOptions;
@property (nonatomic, copy) NSString *punchoutPickerDismissText;
@property (nonatomic, copy) NSString *punchoutPickerTitle;
@property (nonatomic) int separatorStyle;
@property (nonatomic, retain) _SFPBButtonItem *subtitleButtonItem;
@property (readonly) Class superclass;
@property (nonatomic, retain) _SFPBRichText *title;
@property (nonatomic, copy) NSArray *trailingButtonItems;
@property (nonatomic, copy) NSString *type;

- (void).cxx_destruct;
- (void)addPunchoutOptions:(id)arg1;
- (void)addTrailingButtonItems:(id)arg1;
- (id)backgroundColor;
- (bool)canBeHidden;
- (void)clearPunchoutOptions;
- (void)clearTrailingButtonItems;
- (id)dictionaryRepresentation;
- (bool)hasBottomPadding;
- (bool)hasTopPadding;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)punchoutOptions;
- (id)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (id)punchoutPickerDismissText;
- (id)punchoutPickerTitle;
- (bool)readFrom:(id)arg1;
- (int)separatorStyle;
- (void)setBackgroundColor:(id)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setPunchoutOptions:(id)arg1;
- (void)setPunchoutPickerDismissText:(id)arg1;
- (void)setPunchoutPickerTitle:(id)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setSubtitleButtonItem:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTrailingButtonItems:(id)arg1;
- (void)setType:(id)arg1;
- (id)subtitleButtonItem;
- (id)title;
- (id)trailingButtonItems;
- (id)trailingButtonItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)trailingButtonItemsCount;
- (id)type;
- (void)writeTo:(id)arg1;

@end
