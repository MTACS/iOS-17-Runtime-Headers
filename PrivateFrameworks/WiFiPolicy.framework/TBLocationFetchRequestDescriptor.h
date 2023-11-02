
@interface TBLocationFetchRequestDescriptor : NSObject <NSCopying, TBFetchRequestDescriptor> {
    double  _latitude;
    TBLocalFetchRequestDescriptor * _localFetchDescriptor;
    NSPredicate * _localFetchPredicate;
    double  _longitude;
    NSDate * _maxCacheAge;
    TBLocalFetchRequestDescriptor * _preferLocalFetchDescriptor;
    unsigned long long  _primaryTileKey;
    PBCodable * _remoteRequest;
    NSSet * _tileItems;
    unsigned long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double latitude;
@property (nonatomic, retain) TBLocalFetchRequestDescriptor *localFetchDescriptor;
@property (nonatomic, retain) NSPredicate *localFetchPredicate;
@property (nonatomic) double longitude;
@property (nonatomic, retain) NSDate *maxCacheAge;
@property (nonatomic, retain) TBLocalFetchRequestDescriptor *preferLocalFetchDescriptor;
@property (nonatomic) unsigned long long primaryTileKey;
@property (nonatomic, readonly) PBCodable *remoteRequest;
@property (nonatomic, readonly) Class remoteRequestClass;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSSet *tileItems;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (id)_localFetchRequest;
- (id)_preferLocalCacheFetchRequest;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 maxCacheAge:(id)arg3;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 radius:(double)arg3 maxCacheAge:(id)arg4;
- (double)latitude;
- (id)localFetchDescriptor;
- (id)localFetchPredicate;
- (double)longitude;
- (id)maxCacheAge;
- (id)preferLocalFetchDescriptor;
- (unsigned long long)primaryTileKey;
- (id)remoteRequest;
- (Class)remoteRequestClass;
- (void)setLatitude:(double)arg1;
- (void)setLocalFetchDescriptor:(id)arg1;
- (void)setLocalFetchPredicate:(id)arg1;
- (void)setLongitude:(double)arg1;
- (void)setMaxCacheAge:(id)arg1;
- (void)setPreferLocalFetchDescriptor:(id)arg1;
- (void)setPrimaryTileKey:(unsigned long long)arg1;
- (void)setTileItems:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (id)tileItems;
- (unsigned long long)type;

@end
