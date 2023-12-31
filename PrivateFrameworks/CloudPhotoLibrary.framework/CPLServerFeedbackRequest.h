
@interface CPLServerFeedbackRequest : PBRequest <NSCopying> {
    NSMutableArray * _messages;
}

@property (nonatomic, retain) NSMutableArray *messages;

- (void).cxx_destruct;
- (void)addMessages:(id)arg1;
- (void)clearMessages;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)messages;
- (id)messagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)messagesCount;
- (bool)readFrom:(id)arg1;
- (void)setMessages:(id)arg1;
- (void)writeTo:(id)arg1;

@end
