
@interface GEORequestOption : PBCodable <GEOSurchargeType, NSCopying> {
    int  _enumValue;
    struct { 
        unsigned int has_enumValue : 1; 
    }  _flags;
    GEOFormattedString * _name;
    PBUnknownFields * _unknownFields;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int enumValue;
@property (nonatomic, readonly) <GEOServerFormattedString> *formattedName;
@property (nonatomic) bool hasEnumValue;
@property (nonatomic, readonly) bool hasName;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) GEOFormattedString *name;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, readonly) int value;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)enumValue;
- (id)formattedName;
- (bool)hasEnumValue;
- (bool)hasName;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEnumValue:(int)arg1;
- (void)setHasEnumValue:(bool)arg1;
- (void)setName:(id)arg1;
- (id)unknownFields;
- (int)value;
- (void)writeTo:(id)arg1;

@end
