
@interface _ICLLPlayNowQueueItemsAction : PBCodable <NSCopying> {
    struct { 
        unsigned int position : 1; 
        unsigned int revision : 1; 
    }  _has;
    NSMutableArray * _items;
    int  _position;
    NSString * _preferredPlayItemId;
    _ICLLQueueQuery * _queueQuery;
    _ICLLRadioSource * _radioSource;
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
