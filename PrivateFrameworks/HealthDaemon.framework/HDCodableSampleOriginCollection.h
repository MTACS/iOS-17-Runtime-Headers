
@interface HDCodableSampleOriginCollection : PBCodable <NSCopying> {
    NSMutableArray * _contributors;
    NSMutableArray * _devices;
}

@property (nonatomic, retain) NSMutableArray *contributors;
@property (nonatomic, retain) NSMutableArray *devices;

+ (Class)contributorType;
+ (Class)deviceType;

- (void).cxx_destruct;
- (void)addContributor:(id)arg1;
- (void)addDevice:(id)arg1;
- (void)clearContributors;
- (void)clearDevices;
- (id)contributorAtIndex:(unsigned long long)arg1;
- (id)contributors;
- (unsigned long long)contributorsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceAtIndex:(unsigned long long)arg1;
- (id)devices;
- (unsigned long long)devicesCount;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContributors:(id)arg1;
- (void)setDevices:(id)arg1;
- (void)writeTo:(id)arg1;

@end
