
@interface _SFPBPin : PBCodable <NSSecureCoding, _SFPBPin> {
    NSString * _label;
    _SFPBLatLng * _location;
    NSData * _mapsData;
    int  _pinBehavior;
    _SFPBColor * _pinColor;
    NSString * _pinText;
    NSString * _resultID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, retain) _SFPBLatLng *location;
@property (nonatomic, copy) NSData *mapsData;
@property (nonatomic) int pinBehavior;
@property (nonatomic, retain) _SFPBColor *pinColor;
@property (nonatomic, copy) NSString *pinText;
@property (nonatomic, copy) NSString *resultID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)label;
- (id)location;
- (id)mapsData;
- (int)pinBehavior;
- (id)pinColor;
- (id)pinText;
- (bool)readFrom:(id)arg1;
- (id)resultID;
- (void)setLabel:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setMapsData:(id)arg1;
- (void)setPinBehavior:(int)arg1;
- (void)setPinColor:(id)arg1;
- (void)setPinText:(id)arg1;
- (void)setResultID:(id)arg1;
- (void)writeTo:(id)arg1;

@end
