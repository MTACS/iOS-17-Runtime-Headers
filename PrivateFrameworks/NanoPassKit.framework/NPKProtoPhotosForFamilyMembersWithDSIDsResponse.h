
@interface NPKProtoPhotosForFamilyMembersWithDSIDsResponse : PBCodable <NSCopying> {
    NSMutableArray * _familyPhotos;
    NSMutableArray * _familyPhotosIDs;
    struct { 
        unsigned int success : 1; 
    }  _has;
    bool  _success;
}

@property (nonatomic, retain) NSMutableArray *familyPhotos;
@property (nonatomic, retain) NSMutableArray *familyPhotosIDs;
@property (nonatomic) bool hasSuccess;
@property (nonatomic) bool success;

+ (Class)familyPhotosIDsType;
+ (Class)familyPhotosType;

- (void).cxx_destruct;
- (void)addFamilyPhotos:(id)arg1;
- (void)addFamilyPhotosIDs:(id)arg1;
- (void)clearFamilyPhotos;
- (void)clearFamilyPhotosIDs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)familyPhotos;
- (id)familyPhotosAtIndex:(unsigned long long)arg1;
- (unsigned long long)familyPhotosCount;
- (id)familyPhotosIDs;
- (id)familyPhotosIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)familyPhotosIDsCount;
- (bool)hasSuccess;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFamilyPhotos:(id)arg1;
- (void)setFamilyPhotosIDs:(id)arg1;
- (void)setHasSuccess:(bool)arg1;
- (void)setSuccess:(bool)arg1;
- (bool)success;
- (void)writeTo:(id)arg1;

@end
