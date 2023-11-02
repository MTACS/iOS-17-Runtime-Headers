
@interface _ICLLPlaybackSyncStateQuery : PBCodable <NSCopying> {
    NSString * _currentItemId;
    struct { 
        unsigned int initialAVSyncInitiator : 1; 
    }  _has;
    bool  _initialAVSyncInitiator;
    NSString * _initialAVSyncStartItemId;
    NSMutableArray * _participantStates;
    NSMutableArray * _transportControlStates;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
