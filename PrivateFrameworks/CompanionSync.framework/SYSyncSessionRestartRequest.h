
@interface SYSyncSessionRestartRequest : PBRequest <NSCopying> {
    SYMessageHeader * _header;
    NSString * _sessionID;
}

@property (nonatomic, retain) SYMessageHeader *header;
@property (nonatomic, retain) NSString *sessionID;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)header;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sessionID;
- (void)setHeader:(id)arg1;
- (void)setSessionID:(id)arg1;
- (void)writeTo:(id)arg1;

@end
