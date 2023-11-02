
@interface PKProtobufCommonSharingMessageTypeChecker : PBCodable <NSCopying> {
    NSString * _messageType;
    unsigned int  _version;
}

@property (nonatomic, readonly) bool hasMessageType;
@property (nonatomic, retain) NSString *messageType;
@property (nonatomic) unsigned int version;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMessageType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)messageType;
- (bool)readFrom:(id)arg1;
- (void)setMessageType:(id)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end
