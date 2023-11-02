
@interface NNMKProtoFetchRequestCompletedNotification : PBCodable <NSCopying> {
    bool  _failed;
    struct { 
        unsigned int failed : 1; 
    }  _has;
    NSString * _mailboxId;
}

@property (nonatomic) bool failed;
@property (nonatomic) bool hasFailed;
@property (nonatomic, readonly) bool hasMailboxId;
@property (nonatomic, retain) NSString *mailboxId;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)failed;
- (bool)hasFailed;
- (bool)hasMailboxId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mailboxId;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFailed:(bool)arg1;
- (void)setHasFailed:(bool)arg1;
- (void)setMailboxId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
