
@interface _ICLLQueue : PBCodable <NSCopying> {
    NSString * _currentRadioStationId;
    int  _demarkationPos;
    int  _explicitSetting;
    struct { 
        unsigned int demarkationPos : 1; 
        unsigned int explicitSetting : 1; 
        unsigned int revision : 1; 
    }  _has;
    NSMutableArray * _items;
    NSString * _queueId;
    int  _revision;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _storefronts;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
