
@interface _ICLLMoveQueueItemAction : PBCodable <NSCopying> {
    struct { 
        unsigned int position : 1; 
        unsigned int revision : 1; 
    }  _has;
    NSString * _itemId;
    int  _position;
    _ICLLQueueQuery * _queueQuery;
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
