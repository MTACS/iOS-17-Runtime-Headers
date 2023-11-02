
@interface _ICLLReplaceQueueItemsAction : PBCodable <NSCopying> {
    _ICLLAutoPlaySource * _autoPlay;
    struct { 
        unsigned int revision : 1; 
        unsigned int trackGenerationSource : 1; 
    }  _has;
    NSMutableArray * _items;
    NSString * _preferredPlayItemId;
    _ICLLQueueQuery * _queueQuery;
    _ICLLRadioSource * _radio;
    int  _revision;
    int  _trackGenerationSource;
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