
@interface NPKProtoCanAddSecureElementPassWithConfigurationRequest : PBRequest <NSCopying> {
    NSData * _configurationData;
}

@property (nonatomic, retain) NSData *configurationData;
@property (nonatomic, readonly) bool hasConfigurationData;

- (void).cxx_destruct;
- (id)configurationData;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasConfigurationData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConfigurationData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
