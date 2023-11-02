
@interface NTPBBucketGroupConfigResponse : PBCodable <NSCopying> {
    NTPBBucketGroupConfig * _bucketGroupConfig;
    NTPBBloomFilterInfo * _domainBloomFilterInfo;
}

@property (nonatomic, retain) NTPBBucketGroupConfig *bucketGroupConfig;
@property (nonatomic, retain) NTPBBloomFilterInfo *domainBloomFilterInfo;
@property (nonatomic, readonly) bool hasBucketGroupConfig;
@property (nonatomic, readonly) bool hasDomainBloomFilterInfo;

- (void).cxx_destruct;
- (id)bucketGroupConfig;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)domainBloomFilterInfo;
- (bool)hasBucketGroupConfig;
- (bool)hasDomainBloomFilterInfo;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBucketGroupConfig:(id)arg1;
- (void)setDomainBloomFilterInfo:(id)arg1;
- (void)writeTo:(id)arg1;

@end
