
@interface ATXHeroEntriesPb : PBCodable <NSCopying> {
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _adamIds;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _deltaLatitudes;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _deltaLongitudes;
    struct { 
        bool *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _isTouristApps;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _muids;
    NSMutableArray * _poiCategorys;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _radius;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _ranks;
    int  _tileLatitudeE7;
    int  _tileLongitudeE7;
    NSMutableArray * _urlHashs;
}

@property (nonatomic, readonly) unsigned int*adamIds;
@property (nonatomic, readonly) unsigned long long adamIdsCount;
@property (nonatomic, readonly) int*deltaLatitudes;
@property (nonatomic, readonly) unsigned long long deltaLatitudesCount;
@property (nonatomic, readonly) int*deltaLongitudes;
@property (nonatomic, readonly) unsigned long long deltaLongitudesCount;
@property (nonatomic, readonly) bool*isTouristApps;
@property (nonatomic, readonly) unsigned long long isTouristAppsCount;
@property (nonatomic, readonly) unsigned long long*muids;
@property (nonatomic, readonly) unsigned long long muidsCount;
@property (nonatomic, retain) NSMutableArray *poiCategorys;
@property (nonatomic, readonly) unsigned int*radius;
@property (nonatomic, readonly) unsigned long long radiusCount;
@property (nonatomic, readonly) unsigned int*ranks;
@property (nonatomic, readonly) unsigned long long ranksCount;
@property (nonatomic) int tileLatitudeE7;
@property (nonatomic) int tileLongitudeE7;
@property (nonatomic, retain) NSMutableArray *urlHashs;

+ (Class)poiCategoryType;
+ (Class)urlHashType;

- (void).cxx_destruct;
- (unsigned int)adamIdAtIndex:(unsigned long long)arg1;
- (unsigned int*)adamIds;
- (unsigned long long)adamIdsCount;
- (void)addAdamId:(unsigned int)arg1;
- (void)addDeltaLatitude:(int)arg1;
- (void)addDeltaLongitude:(int)arg1;
- (void)addIsTouristApp:(bool)arg1;
- (void)addMuid:(unsigned long long)arg1;
- (void)addPoiCategory:(id)arg1;
- (void)addRadius:(unsigned int)arg1;
- (void)addRank:(unsigned int)arg1;
- (void)addUrlHash:(id)arg1;
- (void)clearAdamIds;
- (void)clearDeltaLatitudes;
- (void)clearDeltaLongitudes;
- (void)clearIsTouristApps;
- (void)clearMuids;
- (void)clearPoiCategorys;
- (void)clearRadius;
- (void)clearRanks;
- (void)clearUrlHashs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (int)deltaLatitudeAtIndex:(unsigned long long)arg1;
- (int*)deltaLatitudes;
- (unsigned long long)deltaLatitudesCount;
- (int)deltaLongitudeAtIndex:(unsigned long long)arg1;
- (int*)deltaLongitudes;
- (unsigned long long)deltaLongitudesCount;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isTouristAppAtIndex:(unsigned long long)arg1;
- (bool*)isTouristApps;
- (unsigned long long)isTouristAppsCount;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muidAtIndex:(unsigned long long)arg1;
- (unsigned long long*)muids;
- (unsigned long long)muidsCount;
- (id)poiCategoryAtIndex:(unsigned long long)arg1;
- (id)poiCategorys;
- (unsigned long long)poiCategorysCount;
- (unsigned int*)radius;
- (unsigned int)radiusAtIndex:(unsigned long long)arg1;
- (unsigned long long)radiusCount;
- (unsigned int)rankAtIndex:(unsigned long long)arg1;
- (unsigned int*)ranks;
- (unsigned long long)ranksCount;
- (bool)readFrom:(id)arg1;
- (void)setAdamIds:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setDeltaLatitudes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setDeltaLongitudes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setIsTouristApps:(bool*)arg1 count:(unsigned long long)arg2;
- (void)setMuids:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setPoiCategorys:(id)arg1;
- (void)setRadius:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setRanks:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setTileLatitudeE7:(int)arg1;
- (void)setTileLongitudeE7:(int)arg1;
- (void)setUrlHashs:(id)arg1;
- (int)tileLatitudeE7;
- (int)tileLongitudeE7;
- (id)urlHashAtIndex:(unsigned long long)arg1;
- (id)urlHashs;
- (unsigned long long)urlHashsCount;
- (void)writeTo:(id)arg1;

@end
