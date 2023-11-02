
@interface GEOLogMsgEventUserActionModuleInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int has_type : 1; 
    }  _flags;
    NSString * _moduleMetadata;
    int  _type;
}

@property (nonatomic, readonly) bool hasModuleMetadata;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) NSString *moduleMetadata;
@property (nonatomic) int type;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasModuleMetadata;
- (bool)hasType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)moduleMetadata;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setModuleMetadata:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
