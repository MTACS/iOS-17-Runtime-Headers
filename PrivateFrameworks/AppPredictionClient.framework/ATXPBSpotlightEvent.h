
@interface ATXPBSpotlightEvent : PBCodable <NSCopying> {
    NSString * _actionBlendingCacheId;
    NSString * _actionConsumerSubType;
    NSMutableArray * _actionSuggestionIds;
    NSString * _appBlendingCacheId;
    NSString * _appConsumerSubType;
    NSMutableArray * _appSuggestionIds;
    double  _date;
    int  _eventType;
    struct { 
        unsigned int date : 1; 
        unsigned int eventType : 1; 
    }  _has;
    ATXPBSpotlightEventMetadata * _metadata;
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
