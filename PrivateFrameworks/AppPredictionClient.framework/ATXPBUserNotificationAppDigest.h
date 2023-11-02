
@interface ATXPBUserNotificationAppDigest : PBCodable <ATXJSONSerializableProtocol, NSCopying> {
    NSMutableArray * _appMarqueeGroups;
    NSString * _bundleId;
    NSMutableArray * _nonAppMarqueeGroups;
}

@property (nonatomic, retain) NSMutableArray *appMarqueeGroups;
@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic, readonly) bool hasBundleId;
@property (nonatomic, retain) NSMutableArray *nonAppMarqueeGroups;

+ (Class)appMarqueeGroupsType;
+ (Class)nonAppMarqueeGroupsType;

- (void).cxx_destruct;
- (void)addAppMarqueeGroups:(id)arg1;
- (void)addNonAppMarqueeGroups:(id)arg1;
- (id)appMarqueeGroups;
- (id)appMarqueeGroupsAtIndex:(unsigned long long)arg1;
- (unsigned long long)appMarqueeGroupsCount;
- (id)bundleId;
- (void)clearAppMarqueeGroups;
- (void)clearNonAppMarqueeGroups;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBundleId;
- (unsigned long long)hash;
- (id)initFromJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)nonAppMarqueeGroups;
- (id)nonAppMarqueeGroupsAtIndex:(unsigned long long)arg1;
- (unsigned long long)nonAppMarqueeGroupsCount;
- (bool)readFrom:(id)arg1;
- (void)setAppMarqueeGroups:(id)arg1;
- (void)setBundleId:(id)arg1;
- (void)setNonAppMarqueeGroups:(id)arg1;
- (void)writeTo:(id)arg1;

@end
