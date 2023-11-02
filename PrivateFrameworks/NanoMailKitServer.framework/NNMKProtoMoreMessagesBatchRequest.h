
@interface NNMKProtoMoreMessagesBatchRequest : PBRequest <NSCopying> {
    unsigned int  _fullSyncVersion;
    struct { 
        unsigned int fullSyncVersion : 1; 
    }  _has;
    NSMutableArray * _moreMessagesRequests;
}

@property (nonatomic) unsigned int fullSyncVersion;
@property (nonatomic) bool hasFullSyncVersion;
@property (nonatomic, retain) NSMutableArray *moreMessagesRequests;

+ (Class)moreMessagesRequestType;

- (void).cxx_destruct;
- (void)addMoreMessagesRequest:(id)arg1;
- (void)clearMoreMessagesRequests;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)fullSyncVersion;
- (bool)hasFullSyncVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)moreMessagesRequestAtIndex:(unsigned long long)arg1;
- (id)moreMessagesRequests;
- (unsigned long long)moreMessagesRequestsCount;
- (bool)readFrom:(id)arg1;
- (void)setFullSyncVersion:(unsigned int)arg1;
- (void)setHasFullSyncVersion:(bool)arg1;
- (void)setMoreMessagesRequests:(id)arg1;
- (void)writeTo:(id)arg1;

@end