
@interface BMPBPhotosKnowledgeGraphEnrichmentLocation : PBCodable <NSCopying> {
    NSString * _city;
    NSString * _country;
    NSData * _encodedLocation;
    NSString * _state;
    NSString * _street;
}

@property (nonatomic, retain) NSString *city;
@property (nonatomic, retain) NSString *country;
@property (nonatomic, retain) NSData *encodedLocation;
@property (nonatomic, readonly) bool hasCity;
@property (nonatomic, readonly) bool hasCountry;
@property (nonatomic, readonly) bool hasEncodedLocation;
@property (nonatomic, readonly) bool hasState;
@property (nonatomic, readonly) bool hasStreet;
@property (nonatomic, retain) NSString *state;
@property (nonatomic, retain) NSString *street;

- (void).cxx_destruct;
- (id)city;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)country;
- (id)description;
- (id)dictionaryRepresentation;
- (id)encodedLocation;
- (bool)hasCity;
- (bool)hasCountry;
- (bool)hasEncodedLocation;
- (bool)hasState;
- (bool)hasStreet;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCity:(id)arg1;
- (void)setCountry:(id)arg1;
- (void)setEncodedLocation:(id)arg1;
- (void)setState:(id)arg1;
- (void)setStreet:(id)arg1;
- (id)state;
- (id)street;
- (void)writeTo:(id)arg1;

@end
