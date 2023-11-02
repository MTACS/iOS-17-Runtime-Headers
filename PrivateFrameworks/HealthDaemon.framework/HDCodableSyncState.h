
@interface HDCodableSyncState : PBCodable <HDSyncState, NSCopying> {
    NSString * _domain;
    NSString * _key;
    HDCodableSyncStateOrigin * _origin;
    HDCodableSyncVersionRange * _version;
    NSMutableArray * _versionedDatas;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *domain;
@property (nonatomic, retain) NSString *domain;
@property (nonatomic, readonly) bool hasDomain;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic, readonly) bool hasOrigin;
@property (nonatomic, readonly) bool hasVersion;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *key;
@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) HDCodableSyncStateOrigin *origin;
@property (readonly) Class superclass;
@property (nonatomic, retain) HDCodableSyncVersionRange *version;
@property (nonatomic, readonly) struct { int x1; int x2; } versionRange;
@property (nonatomic, retain) NSMutableArray *versionedDatas;

+ (Class)versionedDataType;

- (void).cxx_destruct;
- (void)addVersionedData:(id)arg1;
- (void)clearVersionedDatas;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)decodedObjectOfClass:(Class)arg1 version:(long long)arg2 decodedObject:(id*)arg3 error:(id*)arg4;
- (id)description;
- (id)dictionaryRepresentation;
- (id)domain;
- (bool)hasDomain;
- (bool)hasKey;
- (bool)hasOrigin;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (id)origin;
- (bool)readFrom:(id)arg1;
- (void)setCodableObject:(id)arg1 version:(long long)arg2 profile:(id)arg3;
- (void)setDomain:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setOrigin:(id)arg1;
- (void)setVersion:(id)arg1;
- (void)setVersionRange:(struct { int x1; int x2; })arg1;
- (void)setVersionedDatas:(id)arg1;
- (id)version;
- (struct { int x1; int x2; })versionRange;
- (id)versionedDataAtIndex:(unsigned long long)arg1;
- (id)versionedDatas;
- (unsigned long long)versionedDatasCount;
- (void)writeTo:(id)arg1;

@end
