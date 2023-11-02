
@interface _SFPBMetaInfoCardSection : PBCodable <NSSecureCoding, _SFPBMetaInfoCardSection> {
    _SFPBColor * _backgroundColor;
    _SFPBImage * _badge;
    bool  _canBeHidden;
    _SFPBURL * _contentURL;
    bool  _hasBottomPadding;
    bool  _hasTopPadding;
    _SFPBURL * _hostPageURL;
    NSArray * _punchoutOptions;
    NSString * _punchoutPickerDismissText;
    NSString * _punchoutPickerTitle;
    int  _separatorStyle;
    bool  _trending;
    NSString * _type;
}

@property (nonatomic, retain) _SFPBColor *backgroundColor;
@property (nonatomic, retain) _SFPBImage *badge;
@property (nonatomic) bool canBeHidden;
@property (nonatomic, retain) _SFPBURL *contentURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasBottomPadding;
@property (nonatomic) bool hasTopPadding;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _SFPBURL *hostPageURL;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *punchoutOptions;
@property (nonatomic, copy) NSString *punchoutPickerDismissText;
@property (nonatomic, copy) NSString *punchoutPickerTitle;
@property (nonatomic) int separatorStyle;
@property (readonly) Class superclass;
@property (nonatomic) bool trending;
@property (nonatomic, copy) NSString *type;

- (void).cxx_destruct;
- (void)addPunchoutOptions:(id)arg1;
- (id)backgroundColor;
- (id)badge;
- (bool)canBeHidden;
- (void)clearPunchoutOptions;
- (id)contentURL;
- (id)dictionaryRepresentation;
- (bool)hasBottomPadding;
- (bool)hasTopPadding;
- (unsigned long long)hash;
- (id)hostPageURL;
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
- (void)setBadge:(id)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setContentURL:(id)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setHostPageURL:(id)arg1;
- (void)setPunchoutOptions:(id)arg1;
- (void)setPunchoutPickerDismissText:(id)arg1;
- (void)setPunchoutPickerTitle:(id)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setTrending:(bool)arg1;
- (void)setType:(id)arg1;
- (bool)trending;
- (id)type;
- (void)writeTo:(id)arg1;

@end
