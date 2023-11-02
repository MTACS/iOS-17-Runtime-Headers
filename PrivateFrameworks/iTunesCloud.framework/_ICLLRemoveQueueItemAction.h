
@interface _ICLLRemoveQueueItemAction : PBCodable <NSCopying> {
    struct { 
        unsigned int removeType : 1; 
        unsigned int revision : 1; 
    }  _has;
    NSString * _itemId;
    _ICLLQueueQuery * _queueQuery;
    int  _removeType;
    NSMutableArray * _removedItemIds;
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
