
@interface C2MPServerInfo : PBCodable <NSCopying> {
    NSString * _partition;
    NSString * _serviceBuild;
    NSString * _serviceInstance;
    NSString * _serviceName;
}

@property (nonatomic, readonly) bool hasPartition;
@property (nonatomic, readonly) bool hasServiceBuild;
@property (nonatomic, readonly) bool hasServiceInstance;
@property (nonatomic, readonly) bool hasServiceName;
@property (nonatomic, retain) NSString *partition;
@property (nonatomic, retain) NSString *serviceBuild;
@property (nonatomic, retain) NSString *serviceInstance;
@property (nonatomic, retain) NSString *serviceName;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPartition;
- (bool)hasServiceBuild;
- (bool)hasServiceInstance;
- (bool)hasServiceName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)partition;
- (bool)readFrom:(id)arg1;
- (id)serviceBuild;
- (id)serviceInstance;
- (id)serviceName;
- (void)setPartition:(id)arg1;
- (void)setServiceBuild:(id)arg1;
- (void)setServiceInstance:(id)arg1;
- (void)setServiceName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
