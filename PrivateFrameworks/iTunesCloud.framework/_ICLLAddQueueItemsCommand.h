
@interface _ICLLAddQueueItemsCommand : PBCodable <NSCopying> {
    struct { 
        unsigned int insertPositionType : 1; 
        unsigned int position : 1; 
        unsigned int revision : 1; 
    }  _has;
    int  _insertPositionType;
    NSMutableArray * _items;
    int  _position;
    NSString * _queueContext;
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
