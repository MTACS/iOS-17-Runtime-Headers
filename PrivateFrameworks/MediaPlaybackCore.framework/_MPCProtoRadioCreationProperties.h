
@interface _MPCProtoRadioCreationProperties : PBCodable <NSCopying> {
    _MPCProtoDelegateInfo * _accountInfo;
    _MPCProtoRadioContentReference * _nowPlayingContentReference;
    NSString * _playActivityFeatureName;
    NSString * _playActivityQueueGroupingID;
    NSString * _playbackAuthorizationToken;
    NSString * _radioStationID;
    NSString * _radioStationURLString;
    _MPCProtoRadioContentReference * _seedContentReference;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
