
@interface CKDPNotificationSyncResponse : PBCodable <NSCopying> {
    NSData * _changeID;
    struct { 
        unsigned int moreAvailable : 1; 
    }  _has;
    bool  _moreAvailable;
    NSMutableArray * _pushMessages;
}

@property (nonatomic, retain) NSData *changeID;
@property (nonatomic, readonly) bool hasChangeID;
@property (nonatomic) bool hasMoreAvailable;
@property (nonatomic) bool moreAvailable;
@property (nonatomic, retain) NSMutableArray *pushMessages;

+ (Class)pushMessageType;

- (void).cxx_destruct;
- (void)addPushMessage:(id)arg1;
- (id)changeID;
- (void)clearPushMessages;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasChangeID;
- (bool)hasMoreAvailable;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)moreAvailable;
- (id)pushMessageAtIndex:(unsigned long long)arg1;
- (id)pushMessages;
- (unsigned long long)pushMessagesCount;
- (bool)readFrom:(id)arg1;
- (void)setChangeID:(id)arg1;
- (void)setHasMoreAvailable:(bool)arg1;
- (void)setMoreAvailable:(bool)arg1;
- (void)setPushMessages:(id)arg1;
- (void)writeTo:(id)arg1;

@end
