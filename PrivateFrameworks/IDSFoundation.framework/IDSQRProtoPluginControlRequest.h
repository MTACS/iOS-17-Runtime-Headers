
@interface IDSQRProtoPluginControlRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int pluginStreamId : 1; 
    }  _has;
    NSData * _pluginClientRawPublicKey;
    NSString * _pluginName;
    unsigned int  _pluginOperation;
    unsigned int  _pluginStreamId;
}

@property (nonatomic, readonly) bool hasPluginClientRawPublicKey;
@property (nonatomic) bool hasPluginStreamId;
@property (nonatomic, retain) NSData *pluginClientRawPublicKey;
@property (nonatomic, retain) NSString *pluginName;
@property (nonatomic) unsigned int pluginOperation;
@property (nonatomic) unsigned int pluginStreamId;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPluginClientRawPublicKey;
- (bool)hasPluginStreamId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)pluginClientRawPublicKey;
- (id)pluginName;
- (unsigned int)pluginOperation;
- (unsigned int)pluginStreamId;
- (bool)readFrom:(id)arg1;
- (void)setHasPluginStreamId:(bool)arg1;
- (void)setPluginClientRawPublicKey:(id)arg1;
- (void)setPluginName:(id)arg1;
- (void)setPluginOperation:(unsigned int)arg1;
- (void)setPluginStreamId:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
