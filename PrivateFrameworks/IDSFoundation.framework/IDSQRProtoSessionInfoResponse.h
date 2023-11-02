
@interface IDSQRProtoSessionInfoResponse : PBCodable <NSCopying> {
    unsigned int  _commandFlags;
    unsigned int  _generationCounter;
    struct { 
        unsigned int commandFlags : 1; 
        unsigned int generationCounter : 1; 
    }  _has;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _lightweightParticipantIdLists;
    NSMutableArray * _peerPublishedStreams;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _peerSubscribedStreamIds;
}

@property (nonatomic) unsigned int commandFlags;
@property (nonatomic) unsigned int generationCounter;
@property (nonatomic) bool hasCommandFlags;
@property (nonatomic) bool hasGenerationCounter;
@property (nonatomic, readonly) unsigned long long*lightweightParticipantIdLists;
@property (nonatomic, readonly) unsigned long long lightweightParticipantIdListsCount;
@property (nonatomic, retain) NSMutableArray *peerPublishedStreams;
@property (nonatomic, readonly) unsigned int*peerSubscribedStreamIds;
@property (nonatomic, readonly) unsigned long long peerSubscribedStreamIdsCount;

+ (Class)peerPublishedStreamsType;

- (void).cxx_destruct;
- (void)addLightweightParticipantIdList:(unsigned long long)arg1;
- (void)addPeerPublishedStreams:(id)arg1;
- (void)addPeerSubscribedStreamIds:(unsigned int)arg1;
- (void)clearLightweightParticipantIdLists;
- (void)clearPeerPublishedStreams;
- (void)clearPeerSubscribedStreamIds;
- (unsigned int)commandFlags;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)generationCounter;
- (bool)hasCommandFlags;
- (bool)hasGenerationCounter;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned long long)lightweightParticipantIdListAtIndex:(unsigned long long)arg1;
- (unsigned long long*)lightweightParticipantIdLists;
- (unsigned long long)lightweightParticipantIdListsCount;
- (void)mergeFrom:(id)arg1;
- (id)peerPublishedStreams;
- (id)peerPublishedStreamsAtIndex:(unsigned long long)arg1;
- (unsigned long long)peerPublishedStreamsCount;
- (unsigned int*)peerSubscribedStreamIds;
- (unsigned int)peerSubscribedStreamIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)peerSubscribedStreamIdsCount;
- (bool)readFrom:(id)arg1;
- (void)setCommandFlags:(unsigned int)arg1;
- (void)setGenerationCounter:(unsigned int)arg1;
- (void)setHasCommandFlags:(bool)arg1;
- (void)setHasGenerationCounter:(bool)arg1;
- (void)setLightweightParticipantIdLists:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setPeerPublishedStreams:(id)arg1;
- (void)setPeerSubscribedStreamIds:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end
