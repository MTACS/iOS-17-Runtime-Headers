
@interface CPLSuggestionRecordList : PBCodable <NSCopying> {
    NSMutableArray * _assets;
    struct { 
        unsigned int version : 1; 
    }  _has;
    NSMutableArray * _memorys;
    NSMutableArray * _persons;
    unsigned int  _version;
}

@property (nonatomic, retain) NSMutableArray *assets;
@property (nonatomic) bool hasVersion;
@property (nonatomic, retain) NSMutableArray *memorys;
@property (nonatomic, retain) NSMutableArray *persons;
@property (nonatomic) unsigned int version;

+ (Class)assetType;
+ (Class)memoryType;
+ (Class)personType;

- (void).cxx_destruct;
- (void)addAsset:(id)arg1;
- (void)addMemory:(id)arg1;
- (void)addPerson:(id)arg1;
- (id)assetAtIndex:(unsigned long long)arg1;
- (id)assets;
- (unsigned long long)assetsCount;
- (void)clearAssets;
- (void)clearMemorys;
- (void)clearPersons;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)memoryAtIndex:(unsigned long long)arg1;
- (id)memorys;
- (unsigned long long)memorysCount;
- (void)mergeFrom:(id)arg1;
- (id)personAtIndex:(unsigned long long)arg1;
- (id)persons;
- (unsigned long long)personsCount;
- (bool)readFrom:(id)arg1;
- (void)setAssets:(id)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setMemorys:(id)arg1;
- (void)setPersons:(id)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end
