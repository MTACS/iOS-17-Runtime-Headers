
@interface CLPConsolidation : PBCodable <NSCopying> {
    struct { 
        unsigned int possibleDuplicate : 1; 
    }  _has;
    bool  _possibleDuplicate;
    NSString * _version;
}

@property (nonatomic) bool hasPossibleDuplicate;
@property (nonatomic, readonly) bool hasVersion;
@property (nonatomic) bool possibleDuplicate;
@property (nonatomic, retain) NSString *version;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPossibleDuplicate;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)possibleDuplicate;
- (bool)readFrom:(id)arg1;
- (void)setHasPossibleDuplicate:(bool)arg1;
- (void)setPossibleDuplicate:(bool)arg1;
- (void)setVersion:(id)arg1;
- (id)version;
- (void)writeTo:(id)arg1;

@end
