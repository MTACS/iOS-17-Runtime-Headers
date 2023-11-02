
@interface GEOLPRValidationRange : PBCodable <NSCopying> {
    int  _end;
    struct { 
        unsigned int has_end : 1; 
        unsigned int has_start : 1; 
    }  _flags;
    int  _start;
    NSString * _validCharacters;
}

@property (nonatomic) int end;
@property (nonatomic) bool hasEnd;
@property (nonatomic) bool hasStart;
@property (nonatomic, readonly) bool hasValidCharacters;
@property (nonatomic) int start;
@property (nonatomic, retain) NSString *validCharacters;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)end;
- (bool)hasEnd;
- (bool)hasStart;
- (bool)hasValidCharacters;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEnd:(int)arg1;
- (void)setHasEnd:(bool)arg1;
- (void)setHasStart:(bool)arg1;
- (void)setStart:(int)arg1;
- (void)setValidCharacters:(id)arg1;
- (int)start;
- (id)validCharacters;
- (void)writeTo:(id)arg1;

@end
