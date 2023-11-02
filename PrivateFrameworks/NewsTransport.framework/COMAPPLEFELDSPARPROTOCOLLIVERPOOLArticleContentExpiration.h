
@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleContentExpiration : PBCodable <NSCopying> {
    long long  _globalExpireUtcTime;
    struct { 
        unsigned int globalExpireUtcTime : 1; 
    }  _has;
    NSMutableArray * _tagsExpirationLists;
}

@property (nonatomic) long long globalExpireUtcTime;
@property (nonatomic) bool hasGlobalExpireUtcTime;
@property (nonatomic, retain) NSMutableArray *tagsExpirationLists;

+ (Class)tagsExpirationListType;

- (void).cxx_destruct;
- (void)addTagsExpirationList:(id)arg1;
- (void)clearTagsExpirationLists;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)globalExpireUtcTime;
- (bool)hasGlobalExpireUtcTime;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setGlobalExpireUtcTime:(long long)arg1;
- (void)setHasGlobalExpireUtcTime:(bool)arg1;
- (void)setTagsExpirationLists:(id)arg1;
- (id)tagsExpirationListAtIndex:(unsigned long long)arg1;
- (id)tagsExpirationLists;
- (unsigned long long)tagsExpirationListsCount;
- (void)writeTo:(id)arg1;

@end
