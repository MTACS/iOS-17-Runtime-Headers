
@interface IDSQRProtoPluginControlResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int pluginParticipantId : 1; 
    }  _has;
    unsigned long long  _pluginParticipantId;
    NSString * _pluginServerCertHostname;
    NSString * _pluginServerCertOid;
}

@property (nonatomic) bool hasPluginParticipantId;
@property (nonatomic, readonly) bool hasPluginServerCertHostname;
@property (nonatomic, readonly) bool hasPluginServerCertOid;
@property (nonatomic) unsigned long long pluginParticipantId;
@property (nonatomic, retain) NSString *pluginServerCertHostname;
@property (nonatomic, retain) NSString *pluginServerCertOid;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPluginParticipantId;
- (bool)hasPluginServerCertHostname;
- (bool)hasPluginServerCertOid;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)pluginParticipantId;
- (id)pluginServerCertHostname;
- (id)pluginServerCertOid;
- (bool)readFrom:(id)arg1;
- (void)setHasPluginParticipantId:(bool)arg1;
- (void)setPluginParticipantId:(unsigned long long)arg1;
- (void)setPluginServerCertHostname:(id)arg1;
- (void)setPluginServerCertOid:(id)arg1;
- (void)writeTo:(id)arg1;

@end
