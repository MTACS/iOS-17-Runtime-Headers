
@interface TRIMLRuntimeDimensions : PBCodable <NSCopying> {
    NSString * _crashPrefixHash;
    NSString * _pluginId;
    NSString * _underlyingDomainCode;
}

@property (nonatomic, retain) NSString *crashPrefixHash;
@property (nonatomic, readonly) bool hasCrashPrefixHash;
@property (nonatomic, readonly) bool hasPluginId;
@property (nonatomic, readonly) bool hasUnderlyingDomainCode;
@property (nonatomic, retain) NSString *pluginId;
@property (nonatomic, retain) NSString *underlyingDomainCode;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)crashPrefixHash;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCrashPrefixHash;
- (bool)hasPluginId;
- (bool)hasUnderlyingDomainCode;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)pluginId;
- (bool)readFrom:(id)arg1;
- (void)setCrashPrefixHash:(id)arg1;
- (void)setPluginId:(id)arg1;
- (void)setUnderlyingDomainCode:(id)arg1;
- (id)underlyingDomainCode;
- (void)writeTo:(id)arg1;

@end
