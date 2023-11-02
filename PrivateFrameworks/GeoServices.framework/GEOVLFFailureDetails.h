
@interface GEOVLFFailureDetails : PBCodable <NSCopying> {
    int  _failureReason;
    struct { 
        unsigned int has_failureReason : 1; 
    }  _flags;
}

@property (nonatomic) int failureReason;
@property (nonatomic) bool hasFailureReason;

+ (bool)isValid:(id)arg1;

- (int)StringAsFailureReason:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)failureReason;
- (id)failureReasonAsString:(int)arg1;
- (bool)hasFailureReason;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFailureReason:(int)arg1;
- (void)setHasFailureReason:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
