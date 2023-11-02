
@interface ATXPBAppDirectoryEventMetadata : PBCodable <NSCopying> {
    bool  _bundleIdInTopAppsVisible;
    struct { 
        unsigned int bundleIdInTopAppsVisible : 1; 
        unsigned int userLaunchedAppBeforeLeaving : 1; 
    }  _has;
    bool  _userLaunchedAppBeforeLeaving;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
