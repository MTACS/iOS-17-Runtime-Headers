
@interface ATXMPBCacheAgeAtEngagementTracker : PBCodable <NSCopying> {
    NSString * _abGroup;
    NSString * _cacheName;
}

@property (nonatomic, retain) NSString *abGroup;
@property (nonatomic, retain) NSString *cacheName;
@property (nonatomic, readonly) bool hasAbGroup;
@property (nonatomic, readonly) bool hasCacheName;

- (void).cxx_destruct;
- (id)abGroup;
- (id)cacheName;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAbGroup;
- (bool)hasCacheName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAbGroup:(id)arg1;
- (void)setCacheName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
