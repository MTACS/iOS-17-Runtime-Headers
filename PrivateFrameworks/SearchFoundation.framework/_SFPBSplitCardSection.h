
@interface _SFPBSplitCardSection : PBCodable <NSSecureCoding, _SFPBSplitCardSection> {
    _SFPBRichText * _body;
    _SFPBRichText * _bottomTitle;
    NSArray * _listItems;
    NSString * _listMoreString;
    NSString * _listPrefix;
    _SFPBRichText * _secondaryTopTitle;
    _SFPBRichText * _topTitle;
}

@property (nonatomic, retain) _SFPBRichText *body;
@property (nonatomic, retain) _SFPBRichText *bottomTitle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *listItems;
@property (nonatomic, copy) NSString *listMoreString;
@property (nonatomic, copy) NSString *listPrefix;
@property (nonatomic, retain) _SFPBRichText *secondaryTopTitle;
@property (readonly) Class superclass;
@property (nonatomic, retain) _SFPBRichText *topTitle;

- (void).cxx_destruct;
- (void)addListItems:(id)arg1;
- (id)body;
- (id)bottomTitle;
- (void)clearListItems;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)listItems;
- (id)listItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)listItemsCount;
- (id)listMoreString;
- (id)listPrefix;
- (bool)readFrom:(id)arg1;
- (id)secondaryTopTitle;
- (void)setBody:(id)arg1;
- (void)setBottomTitle:(id)arg1;
- (void)setListItems:(id)arg1;
- (void)setListMoreString:(id)arg1;
- (void)setListPrefix:(id)arg1;
- (void)setSecondaryTopTitle:(id)arg1;
- (void)setTopTitle:(id)arg1;
- (id)topTitle;
- (void)writeTo:(id)arg1;

@end
