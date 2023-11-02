
@interface AWDWiFiNWActivityMpduLost : PBCodable <NSCopying> {
    AWDWiFiNWActivityMpduWME * _bALost;
    AWDWiFiNWActivityMpduWME * _nonBALost;
}

@property (nonatomic, retain) AWDWiFiNWActivityMpduWME *bALost;
@property (nonatomic, readonly) bool hasBALost;
@property (nonatomic, readonly) bool hasNonBALost;
@property (nonatomic, retain) AWDWiFiNWActivityMpduWME *nonBALost;

- (id)bALost;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBALost;
- (bool)hasNonBALost;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nonBALost;
- (bool)readFrom:(id)arg1;
- (void)setBALost:(id)arg1;
- (void)setNonBALost:(id)arg1;
- (void)writeTo:(id)arg1;

@end
