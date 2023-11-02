
@interface HMAccessoryInfoProtoWifiNetworkInfoEvent : PBCodable <NSCopying> {
    NSString * _macAddress;
    NSString * _networkSSID;
}

@property (nonatomic, readonly) bool hasMacAddress;
@property (nonatomic, readonly) bool hasNetworkSSID;
@property (nonatomic, retain) NSString *macAddress;
@property (nonatomic, retain) NSString *networkSSID;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMacAddress;
- (bool)hasNetworkSSID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)macAddress;
- (void)mergeFrom:(id)arg1;
- (id)networkSSID;
- (bool)readFrom:(id)arg1;
- (void)setMacAddress:(id)arg1;
- (void)setNetworkSSID:(id)arg1;
- (void)writeTo:(id)arg1;

@end
