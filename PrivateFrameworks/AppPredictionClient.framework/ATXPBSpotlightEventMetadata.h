
@interface ATXPBSpotlightEventMetadata : PBCodable <NSCopying> {
    bool  _didSearchDuringSession;
    NSString * _engagedAppString;
    struct { 
        unsigned int searchEngagedActionType : 1; 
        unsigned int didSearchDuringSession : 1; 
    }  _has;
    NSString * _queryAtEngagement;
    unsigned long long  _searchEngagedActionType;
    NSString * _searchEngagedBundleId;
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
