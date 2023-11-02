
@interface IDSQRProtoSubscribedStream : PBCodable <NSCopying> {
    struct { 
        unsigned int isSeamlessTransition : 1; 
    }  _has;
    bool  _isSeamlessTransition;
    unsigned long long  _peerParticipantId;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _peerStreamIds;
    bool  _wildcardSubscription;
}

@property (nonatomic) bool hasIsSeamlessTransition;
@property (nonatomic) bool isSeamlessTransition;
@property (nonatomic) unsigned long long peerParticipantId;
@property (nonatomic, readonly) unsigned int*peerStreamIds;
@property (nonatomic, readonly) unsigned long long peerStreamIdsCount;
@property (nonatomic) bool wildcardSubscription;

- (void)addPeerStreamIds:(unsigned int)arg1;
- (void)clearPeerStreamIds;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsSeamlessTransition;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isSeamlessTransition;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)peerParticipantId;
- (unsigned int*)peerStreamIds;
- (unsigned int)peerStreamIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)peerStreamIdsCount;
- (bool)readFrom:(id)arg1;
- (void)setHasIsSeamlessTransition:(bool)arg1;
- (void)setIsSeamlessTransition:(bool)arg1;
- (void)setPeerParticipantId:(unsigned long long)arg1;
- (void)setPeerStreamIds:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setWildcardSubscription:(bool)arg1;
- (bool)wildcardSubscription;
- (void)writeTo:(id)arg1;

@end
