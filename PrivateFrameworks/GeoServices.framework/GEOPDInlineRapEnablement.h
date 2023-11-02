
@interface GEOPDInlineRapEnablement : PBCodable <NSCopying> {
    struct { 
        unsigned int has_isAddressEditable : 1; 
        unsigned int has_isHoursEditable : 1; 
        unsigned int has_isPhoneEditable : 1; 
        unsigned int has_isWebsiteEditable : 1; 
    }  _flags;
    bool  _isAddressEditable;
    bool  _isHoursEditable;
    bool  _isPhoneEditable;
    bool  _isWebsiteEditable;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasIsAddressEditable;
@property (nonatomic) bool hasIsHoursEditable;
@property (nonatomic) bool hasIsPhoneEditable;
@property (nonatomic) bool hasIsWebsiteEditable;
@property (nonatomic) bool isAddressEditable;
@property (nonatomic) bool isHoursEditable;
@property (nonatomic) bool isPhoneEditable;
@property (nonatomic) bool isWebsiteEditable;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsAddressEditable;
- (bool)hasIsHoursEditable;
- (bool)hasIsPhoneEditable;
- (bool)hasIsWebsiteEditable;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isAddressEditable;
- (bool)isEqual:(id)arg1;
- (bool)isHoursEditable;
- (bool)isPhoneEditable;
- (bool)isWebsiteEditable;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIsAddressEditable:(bool)arg1;
- (void)setHasIsHoursEditable:(bool)arg1;
- (void)setHasIsPhoneEditable:(bool)arg1;
- (void)setHasIsWebsiteEditable:(bool)arg1;
- (void)setIsAddressEditable:(bool)arg1;
- (void)setIsHoursEditable:(bool)arg1;
- (void)setIsPhoneEditable:(bool)arg1;
- (void)setIsWebsiteEditable:(bool)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
