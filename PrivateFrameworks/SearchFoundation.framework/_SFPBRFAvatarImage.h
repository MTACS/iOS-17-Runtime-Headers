
@interface _SFPBRFAvatarImage : PBCodable <NSSecureCoding, _SFPBRFAvatarImage> {
    NSArray * _contact_ids;
    int  _image_style;
}

@property (nonatomic, copy) NSArray *contact_ids;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int image_style;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addContact_ids:(id)arg1;
- (void)clearContact_ids;
- (id)contact_ids;
- (id)contact_idsAtIndex:(unsigned long long)arg1;
- (unsigned long long)contact_idsCount;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (int)image_style;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setContact_ids:(id)arg1;
- (void)setImage_style:(int)arg1;
- (void)writeTo:(id)arg1;

@end
