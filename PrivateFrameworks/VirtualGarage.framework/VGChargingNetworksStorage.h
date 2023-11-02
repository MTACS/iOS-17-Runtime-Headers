
@interface VGChargingNetworksStorage : PBCodable <NSCopying> {
    struct { 
        unsigned int usesPreferredNetworksForRouting : 1; 
    }  _has;
    NSMutableArray * _networks;
    bool  _usesPreferredNetworksForRouting;
}

@property (nonatomic) bool hasUsesPreferredNetworksForRouting;
@property (nonatomic, retain) NSMutableArray *networks;
@property (nonatomic) bool usesPreferredNetworksForRouting;

+ (Class)networksType;

- (void).cxx_destruct;
- (void)addNetworks:(id)arg1;
- (void)clearNetworks;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasUsesPreferredNetworksForRouting;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)networks;
- (id)networksAtIndex:(unsigned long long)arg1;
- (unsigned long long)networksCount;
- (bool)readFrom:(id)arg1;
- (void)setHasUsesPreferredNetworksForRouting:(bool)arg1;
- (void)setNetworks:(id)arg1;
- (void)setUsesPreferredNetworksForRouting:(bool)arg1;
- (bool)usesPreferredNetworksForRouting;
- (void)writeTo:(id)arg1;

@end
