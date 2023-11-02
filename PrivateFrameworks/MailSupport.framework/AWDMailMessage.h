
@interface AWDMailMessage : PBCodable <NSCopying> {
    AWDMailMessageBody * _body;
    NSString * _messageId;
}

@property (nonatomic, retain) AWDMailMessageBody *body;
@property (nonatomic, readonly) bool hasBody;
@property (nonatomic, readonly) bool hasMessageId;
@property (nonatomic, retain) NSString *messageId;

- (void).cxx_destruct;
- (id)body;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBody;
- (bool)hasMessageId;
- (unsigned long long)hash;
- (id)initWithMailMessage:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)messageId;
- (bool)readFrom:(id)arg1;
- (void)setBody:(id)arg1;
- (void)setMessageId:(id)arg1;
- (void)writeTo:(id)arg1;

@end