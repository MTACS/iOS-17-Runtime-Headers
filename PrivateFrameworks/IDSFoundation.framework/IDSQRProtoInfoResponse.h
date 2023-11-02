
@interface IDSQRProtoInfoResponse : PBCodable <NSCopying> {
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _activeLightweightParticipants;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _activeParticipants;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _activeVirtualParticipants;
    NSString * _clientAddress;
}

@property (nonatomic, readonly) unsigned long long*activeLightweightParticipants;
@property (nonatomic, readonly) unsigned long long activeLightweightParticipantsCount;
@property (nonatomic, readonly) unsigned long long*activeParticipants;
@property (nonatomic, readonly) unsigned long long activeParticipantsCount;
@property (nonatomic, readonly) unsigned long long*activeVirtualParticipants;
@property (nonatomic, readonly) unsigned long long activeVirtualParticipantsCount;
@property (nonatomic, retain) NSString *clientAddress;
@property (nonatomic, readonly) bool hasClientAddress;

- (void).cxx_destruct;
- (unsigned long long*)activeLightweightParticipants;
- (unsigned long long)activeLightweightParticipantsAtIndex:(unsigned long long)arg1;
- (unsigned long long)activeLightweightParticipantsCount;
- (unsigned long long*)activeParticipants;
- (unsigned long long)activeParticipantsAtIndex:(unsigned long long)arg1;
- (unsigned long long)activeParticipantsCount;
- (unsigned long long*)activeVirtualParticipants;
- (unsigned long long)activeVirtualParticipantsAtIndex:(unsigned long long)arg1;
- (unsigned long long)activeVirtualParticipantsCount;
- (void)addActiveLightweightParticipants:(unsigned long long)arg1;
- (void)addActiveParticipants:(unsigned long long)arg1;
- (void)addActiveVirtualParticipants:(unsigned long long)arg1;
- (void)clearActiveLightweightParticipants;
- (void)clearActiveParticipants;
- (void)clearActiveVirtualParticipants;
- (id)clientAddress;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasClientAddress;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActiveLightweightParticipants:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setActiveParticipants:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setActiveVirtualParticipants:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setClientAddress:(id)arg1;
- (void)writeTo:(id)arg1;

@end
