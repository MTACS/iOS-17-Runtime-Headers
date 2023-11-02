
@interface GEOWiFiESSMatch : PBCodable <NSCopying> {
    GEOWiFiESS * _ess;
    struct { 
        unsigned int has_status : 1; 
    }  _flags;
    int  _status;
}

@property (nonatomic, retain) GEOWiFiESS *ess;
@property (nonatomic, readonly) bool hasEss;
@property (nonatomic) bool hasStatus;
@property (nonatomic) int status;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsStatus:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)ess;
- (bool)hasEss;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasStatus;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEss:(id)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (id)statusAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
