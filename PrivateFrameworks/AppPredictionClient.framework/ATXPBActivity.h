
@interface ATXPBActivity : PBCodable <NSCopying> {
    struct { 
        unsigned int origin : 1; 
        unsigned int uiLocation : 1; 
        unsigned int type : 1; 
        unsigned int shouldSuggestTriggers : 1; 
    }  _has;
    NSString * _modeUUID;
    unsigned long long  _origin;
    NSString * _originAnchorType;
    NSString * _originBundleId;
    NSMutableArray * _serializedTriggers;
    bool  _shouldSuggestTriggers;
    NSString * _suggestionUUID;
    int  _type;
    unsigned long long  _uiLocation;
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
