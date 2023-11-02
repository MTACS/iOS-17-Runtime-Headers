
@interface AWDHomeKitMultiUserSettings : PBCodable <NSCopying> {
    struct { 
        unsigned int isOwner : 1; 
    }  _has;
    NSMutableArray * _homeKitMultiUserSettingsValuesByKeyPaths;
    bool  _isOwner;
}

@property (nonatomic) bool hasIsOwner;
@property (nonatomic, retain) NSMutableArray *homeKitMultiUserSettingsValuesByKeyPaths;
@property (nonatomic) bool isOwner;

+ (Class)homeKitMultiUserSettingsValuesByKeyPathType;

- (void).cxx_destruct;
- (void)addHomeKitMultiUserSettingsValuesByKeyPath:(id)arg1;
- (void)clearHomeKitMultiUserSettingsValuesByKeyPaths;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsOwner;
- (unsigned long long)hash;
- (id)homeKitMultiUserSettingsValuesByKeyPathAtIndex:(unsigned long long)arg1;
- (id)homeKitMultiUserSettingsValuesByKeyPaths;
- (unsigned long long)homeKitMultiUserSettingsValuesByKeyPathsCount;
- (bool)isEqual:(id)arg1;
- (bool)isOwner;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIsOwner:(bool)arg1;
- (void)setHomeKitMultiUserSettingsValuesByKeyPaths:(id)arg1;
- (void)setIsOwner:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
