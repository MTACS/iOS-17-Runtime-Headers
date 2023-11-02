
@interface _SFPBRFVisualElement : PBCodable <NSSecureCoding, _SFPBRFVisualElement> {
    _SFPBRFImageElement * _image_element;
    unsigned long long  _whichElement;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _SFPBRFImageElement *image_element;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long whichElement;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)image_element;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setImage_element:(id)arg1;
- (unsigned long long)whichElement;
- (void)writeTo:(id)arg1;

@end
