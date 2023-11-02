
@interface _SFPBMediaOffer : PBCodable <NSSecureCoding, _SFPBMediaOffer> {
    _SFPBActionItem * _actionItem;
    _SFPBImage * _image;
    bool  _isEnabled;
    NSString * _offerIdentifier;
    NSString * _sublabel;
}

@property (nonatomic, retain) _SFPBActionItem *actionItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _SFPBImage *image;
@property (nonatomic) bool isEnabled;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *offerIdentifier;
@property (nonatomic, copy) NSString *sublabel;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)actionItem;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)image;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)offerIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setActionItem:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setIsEnabled:(bool)arg1;
- (void)setOfferIdentifier:(id)arg1;
- (void)setSublabel:(id)arg1;
- (id)sublabel;
- (void)writeTo:(id)arg1;

@end
