
@interface MailIntelligencePETMailIntelligenceAnalysisEvent : PBCodable <NSCopying> {
    int  _batch;
    NSString * _collectionId;
    MailIntelligencePETContactEvents * _contactEvents;
    unsigned long long  _mailIntelligenceUserId;
    NSString * _sessionId;
}

@property (nonatomic) int batch;
@property (nonatomic, retain) NSString *collectionId;
@property (nonatomic, retain) MailIntelligencePETContactEvents *contactEvents;
@property (nonatomic) unsigned long long mailIntelligenceUserId;
@property (nonatomic, retain) NSString *sessionId;

- (void).cxx_destruct;
- (int)batch;
- (id)collectionId;
- (id)contactEvents;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned long long)mailIntelligenceUserId;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sessionId;
- (void)setBatch:(int)arg1;
- (void)setCollectionId:(id)arg1;
- (void)setContactEvents:(id)arg1;
- (void)setMailIntelligenceUserId:(unsigned long long)arg1;
- (void)setSessionId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
