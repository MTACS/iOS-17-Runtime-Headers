
@interface TBTileFetchRequestDescriptor : NSObject <NSCopying, TBFetchRequestDescriptor> {
    TBLocalFetchRequestDescriptor * _localFetchDescriptor;
    NSPredicate * _localFetchPredicate;
    NSDate * _maxCacheAge;
    TBLocalFetchRequestDescriptor * _preferLocalFetchDescriptor;
    NSSet * _tileItems;
    unsigned long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TBLocalFetchRequestDescriptor *localFetchDescriptor;
@property (nonatomic, retain) NSPredicate *localFetchPredicate;
@property (nonatomic, retain) NSDate *maxCacheAge;
@property (nonatomic, retain) TBLocalFetchRequestDescriptor *preferLocalFetchDescriptor;
@property (nonatomic, readonly) PBCodable *remoteRequest;
@property (nonatomic, readonly) Class remoteRequestClass;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSSet *tileItems;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (id)_preferLocalCacheFetchRequest;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithTileItems:(id)arg1;
- (id)initWithTileItems:(id)arg1 maxCacheAge:(id)arg2;
- (id)localFetchDescriptor;
- (id)localFetchPredicate;
- (id)maxCacheAge;
- (id)preferLocalFetchDescriptor;
- (id)remoteRequest;
- (Class)remoteRequestClass;
- (void)setLocalFetchDescriptor:(id)arg1;
- (void)setLocalFetchPredicate:(id)arg1;
- (void)setMaxCacheAge:(id)arg1;
- (void)setPreferLocalFetchDescriptor:(id)arg1;
- (void)setTileItems:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (id)tileItems;
- (unsigned long long)type;

@end
