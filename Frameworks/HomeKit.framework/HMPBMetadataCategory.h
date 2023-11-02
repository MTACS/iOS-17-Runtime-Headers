
@interface HMPBMetadataCategory : PBCodable <NSCopying> {
    NSString * _catDescription;
    struct { 
        unsigned int identifier : 1; 
    }  _has;
    int  _identifier;
    NSString * _uuidStr;
}

@property (nonatomic, retain) NSString *catDescription;
@property (nonatomic, readonly) bool hasCatDescription;
@property (nonatomic) bool hasIdentifier;
@property (nonatomic, readonly) bool hasUuidStr;
@property (nonatomic) int identifier;
@property (nonatomic, retain) NSString *uuidStr;

- (void).cxx_destruct;
- (id)catDescription;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCatDescription;
- (bool)hasIdentifier;
- (bool)hasUuidStr;
- (unsigned long long)hash;
- (int)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCatDescription:(id)arg1;
- (void)setHasIdentifier:(bool)arg1;
- (void)setIdentifier:(int)arg1;
- (void)setUuidStr:(id)arg1;
- (id)uuidStr;
- (void)writeTo:(id)arg1;

@end
