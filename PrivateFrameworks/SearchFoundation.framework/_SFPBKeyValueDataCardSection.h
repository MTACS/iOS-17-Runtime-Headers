
@interface _SFPBKeyValueDataCardSection : PBCodable <NSSecureCoding, _SFPBKeyValueDataCardSection> {
    _SFPBImage * _accessoryImage;
    _SFPBColor * _backgroundColor;
    bool  _canBeHidden;
    NSArray * _datas;
    bool  _hasBottomPadding;
    bool  _hasTopPadding;
    NSArray * _punchoutOptions;
    NSString * _punchoutPickerDismissText;
    NSString * _punchoutPickerTitle;
    int  _separatorStyle;
    NSString * _type;
}

@property (nonatomic, retain) _SFPBImage *accessoryImage;
@property (nonatomic, retain) _SFPBColor *backgroundColor;
@property (nonatomic) bool canBeHidden;
@property (nonatomic, copy) NSArray *datas;
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
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *type;

- (void).cxx_destruct;
- (id)accessoryImage;
- (void)addData:(id)arg1;
- (void)addPunchoutOptions:(id)arg1;
- (id)backgroundColor;
- (bool)canBeHidden;
- (void)clearData;
- (void)clearPunchoutOptions;
- (id)dataAtIndex:(unsigned long long)arg1;
- (unsigned long long)dataCount;
- (id)datas;
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
- (void)setAccessoryImage:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setData:(id)arg1;
- (void)setDatas:(id)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setPunchoutOptions:(id)arg1;
- (void)setPunchoutPickerDismissText:(id)arg1;
- (void)setPunchoutPickerTitle:(id)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setType:(id)arg1;
- (id)type;
- (void)writeTo:(id)arg1;

@end
