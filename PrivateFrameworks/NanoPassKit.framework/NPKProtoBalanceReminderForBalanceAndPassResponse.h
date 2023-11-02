
@interface NPKProtoBalanceReminderForBalanceAndPassResponse : PBCodable <NSCopying> {
    NSData * _balanceReminderBytes;
    NSData * _errorData;
    struct { 
        unsigned int pending : 1; 
    }  _has;
    bool  _pending;
}

@property (nonatomic, retain) NSData *balanceReminderBytes;
@property (nonatomic, retain) NSData *errorData;
@property (nonatomic, readonly) bool hasBalanceReminderBytes;
@property (nonatomic, readonly) bool hasErrorData;
@property (nonatomic) bool hasPending;
@property (nonatomic) bool pending;

- (void).cxx_destruct;
- (id)balanceReminderBytes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorData;
- (bool)hasBalanceReminderBytes;
- (bool)hasErrorData;
- (bool)hasPending;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)pending;
- (bool)readFrom:(id)arg1;
- (void)setBalanceReminderBytes:(id)arg1;
- (void)setErrorData:(id)arg1;
- (void)setHasPending:(bool)arg1;
- (void)setPending:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
