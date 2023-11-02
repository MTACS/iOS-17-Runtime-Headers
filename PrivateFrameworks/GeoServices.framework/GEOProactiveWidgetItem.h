
@interface GEOProactiveWidgetItem : PBCodable <NSCopying> {
    struct { 
        unsigned int has_timeSinceStart : 1; 
    }  _flags;
    int  _timeSinceStart;
}

@property (nonatomic) bool hasTimeSinceStart;
@property (nonatomic) int timeSinceStart;

+ (bool)isValid:(id)arg1;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTimeSinceStart;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTimeSinceStart:(bool)arg1;
- (void)setTimeSinceStart:(int)arg1;
- (int)timeSinceStart;
- (void)writeTo:(id)arg1;

@end
