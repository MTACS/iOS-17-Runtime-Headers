
@interface GEOFormatStyle : PBCodable <GEOServerFormatStyle, NSCopying> {
    struct { 
        unsigned int has_type : 1; 
    }  _flags;
    NSString * _token;
    int  _type;
    PBUnknownFields * _unknownFields;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasToken;
@property (nonatomic) bool hasType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long styleType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *token;
@property (nonatomic, retain) NSString *token;
@property (nonatomic) int type;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasToken;
- (bool)hasType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setToken:(id)arg1;
- (void)setType:(int)arg1;
- (long long)styleType;
- (id)token;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
