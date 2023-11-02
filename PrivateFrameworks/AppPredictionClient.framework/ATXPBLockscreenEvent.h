
@interface ATXPBLockscreenEvent : PBCodable <NSCopying> {
    NSString * _blendingCacheId;
    double  _date;
    int  _eventType;
    struct { 
        unsigned int date : 1; 
        unsigned int eventType : 1; 
    }  _has;
    NSMutableArray * _suggestionIds;
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
