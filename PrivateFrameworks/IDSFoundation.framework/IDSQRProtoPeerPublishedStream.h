
@interface IDSQRProtoPeerPublishedStream : PBCodable <NSCopying> {
    unsigned long long  _peerParticipantId;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _peerStreamIds;
}

@property (nonatomic) unsigned long long peerParticipantId;
@property (nonatomic, readonly) unsigned int*peerStreamIds;
@property (nonatomic, readonly) unsigned long long peerStreamIdsCount;

- (void)addPeerStreamIds:(unsigned int)arg1;
- (void)clearPeerStreamIds;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)peerParticipantId;
- (unsigned int*)peerStreamIds;
- (unsigned int)peerStreamIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)peerStreamIdsCount;
- (bool)readFrom:(id)arg1;
- (void)setPeerParticipantId:(unsigned long long)arg1;
- (void)setPeerStreamIds:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end
