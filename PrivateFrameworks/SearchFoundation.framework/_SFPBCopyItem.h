
@interface _SFPBCopyItem : PBCodable <NSSecureCoding, _SFPBCopyItem> {
    _SFPBContactCopyItem * _contactCopyItem;
    _SFPBImageCopyItem * _imageCopyItem;
    _SFPBCoreSpotlightCopyItem * _spotlightCopyItem;
    _SFPBTextCopyItem * _textCopyItem;
    unsigned long long  _whichValue;
}

@property (nonatomic, retain) _SFPBContactCopyItem *contactCopyItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _SFPBImageCopyItem *imageCopyItem;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) _SFPBCoreSpotlightCopyItem *spotlightCopyItem;
@property (readonly) Class superclass;
@property (nonatomic, retain) _SFPBTextCopyItem *textCopyItem;
@property (nonatomic, readonly) unsigned long long whichValue;

- (void).cxx_destruct;
- (id)contactCopyItem;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)imageCopyItem;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setContactCopyItem:(id)arg1;
- (void)setImageCopyItem:(id)arg1;
- (void)setSpotlightCopyItem:(id)arg1;
- (void)setTextCopyItem:(id)arg1;
- (id)spotlightCopyItem;
- (id)textCopyItem;
- (unsigned long long)whichValue;
- (void)writeTo:(id)arg1;

@end
