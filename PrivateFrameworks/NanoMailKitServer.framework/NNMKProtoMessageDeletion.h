
@interface NNMKProtoMessageDeletion : PBCodable <NSCopying> {
    unsigned int  _deletionState;
    struct { 
        unsigned int deletionState : 1; 
    }  _has;
    NSString * _messageId;
}

@property (nonatomic) unsigned int deletionState;
@property (nonatomic) bool hasDeletionState;
@property (nonatomic, readonly) bool hasMessageId;
@property (nonatomic, retain) NSString *messageId;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)deletionState;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDeletionState;
- (bool)hasMessageId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)messageId;
- (bool)readFrom:(id)arg1;
- (void)setDeletionState:(unsigned int)arg1;
- (void)setHasDeletionState:(bool)arg1;
- (void)setMessageId:(id)arg1;
- (void)writeTo:(id)arg1;

@end