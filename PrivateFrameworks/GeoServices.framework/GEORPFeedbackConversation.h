
@interface GEORPFeedbackConversation : PBCodable <NSCopying> {
    NSMutableArray * _messages;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *messages;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;
+ (Class)messageType;

- (void).cxx_destruct;
- (void)addMessage:(id)arg1;
- (void)clearMessages;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)messageAtIndex:(unsigned long long)arg1;
- (id)messages;
- (unsigned long long)messagesCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setMessages:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
