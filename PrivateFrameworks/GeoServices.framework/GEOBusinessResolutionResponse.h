
@interface GEOBusinessResolutionResponse : PBCodable <NSCopying> {
    NSString * _businessName;
    unsigned long long  _businessUID;
    struct { 
        unsigned int has_businessUID : 1; 
        unsigned int has_status : 1; 
    }  _flags;
    int  _status;
}

@property (nonatomic, retain) NSString *businessName;
@property (nonatomic) unsigned long long businessUID;
@property (nonatomic, readonly) bool hasBusinessName;
@property (nonatomic) bool hasBusinessUID;
@property (nonatomic) bool hasStatus;
@property (nonatomic) int status;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsStatus:(id)arg1;
- (id)businessName;
- (unsigned long long)businessUID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBusinessName;
- (bool)hasBusinessUID;
- (bool)hasStatus;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBusinessName:(id)arg1;
- (void)setBusinessUID:(unsigned long long)arg1;
- (void)setHasBusinessUID:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (id)statusAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
