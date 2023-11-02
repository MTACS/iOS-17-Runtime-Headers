
@interface _ICLLQueueSyncAction : PBCodable <NSCopying> {
    _ICLLPlaybackControlSettings * _controlSettings;
    struct { 
        unsigned int revision : 1; 
    }  _has;
    _ICLLQueue * _queue;
    NSString * _queueContext;
    int  _revision;
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
