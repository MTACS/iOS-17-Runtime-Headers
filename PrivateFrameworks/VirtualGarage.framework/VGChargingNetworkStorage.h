
@interface VGChargingNetworkStorage : PBCodable <NSCopying> {
    struct { 
        unsigned int identifier : 1; 
    }  _has;
    unsigned long long  _identifier;
    NSString * _name;
}

@property (nonatomic) bool hasIdentifier;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic) unsigned long long identifier;
@property (nonatomic, retain) NSString *name;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIdentifier;
- (bool)hasName;
- (unsigned long long)hash;
- (unsigned long long)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setHasIdentifier:(bool)arg1;
- (void)setIdentifier:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
