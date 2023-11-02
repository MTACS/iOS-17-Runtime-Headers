
@interface _MRGroupSessionFastSyncMessageProtobuf : PBCodable <NSCopying> {
    struct { 
        unsigned int messageType : 1; 
    }  _has;
    int  _messageType;
    NSData * _payload;
}

@property (nonatomic) bool hasMessageType;
@property (nonatomic, readonly) bool hasPayload;
@property (nonatomic) int messageType;
@property (nonatomic, retain) NSData *payload;

- (void).cxx_destruct;
- (int)StringAsMessageType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMessageType;
- (bool)hasPayload;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)messageType;
- (id)messageTypeAsString:(int)arg1;
- (id)payload;
- (bool)readFrom:(id)arg1;
- (void)setHasMessageType:(bool)arg1;
- (void)setMessageType:(int)arg1;
- (void)setPayload:(id)arg1;
- (void)writeTo:(id)arg1;

@end
