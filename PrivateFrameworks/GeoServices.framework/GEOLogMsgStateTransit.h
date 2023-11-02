
@interface GEOLogMsgStateTransit : PBCodable <NSCopying> {
    struct { 
        unsigned int has_transitNotAvailableAdvisoryShowing : 1; 
    }  _flags;
    bool  _transitNotAvailableAdvisoryShowing;
}

@property (nonatomic) bool hasTransitNotAvailableAdvisoryShowing;
@property (nonatomic) bool transitNotAvailableAdvisoryShowing;

+ (bool)isValid:(id)arg1;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTransitNotAvailableAdvisoryShowing;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTransitNotAvailableAdvisoryShowing:(bool)arg1;
- (void)setTransitNotAvailableAdvisoryShowing:(bool)arg1;
- (bool)transitNotAvailableAdvisoryShowing;
- (void)writeTo:(id)arg1;

@end
