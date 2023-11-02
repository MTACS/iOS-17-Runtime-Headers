
@interface _ICLLQueryMessage : PBCodable <NSCopying> {
    struct { 
        unsigned int query : 1; 
    }  _has;
    _ICLLParticipantQuery * _participant;
    _ICLLPlaybackControlSettingsQuery * _playbackControlSettings;
    _ICLLPlaybackSyncStateQuery * _playbackSyncState;
    int  _query;
    _ICLLQueueQuery * _queue;
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
