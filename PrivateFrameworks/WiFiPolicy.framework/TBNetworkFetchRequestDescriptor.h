
@interface TBNetworkFetchRequestDescriptor : NSObject <NSCopying, TBFetchRequestDescriptor> {
    NSSet * _bssids;
    TBLocalFetchRequestDescriptor * _localFetchDescriptor;
    NSPredicate * _localFetchPredicate;
    NSDate * _maxCacheAge;
    TBLocalFetchRequestDescriptor * _preferLocalFetchDescriptor;
    GEOWiFiQualityNetworkSearch * _remoteRequest;
    unsigned long long  _type;
}

@property (nonatomic, retain) NSSet *bssids;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TBLocalFetchRequestDescriptor *localFetchDescriptor;
@property (nonatomic, retain) NSPredicate *localFetchPredicate;
@property (nonatomic, retain) NSDate *maxCacheAge;
@property (nonatomic, retain) TBLocalFetchRequestDescriptor *preferLocalFetchDescriptor;
@property (nonatomic, retain) GEOWiFiQualityNetworkSearch *remoteRequest;
@property (nonatomic, readonly) Class remoteRequestClass;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSSet *tileItems;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (id)bssids;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithBSSIDs:(id)arg1;
- (id)initWithBSSIDs:(id)arg1 maxCacheAge:(id)arg2;
- (id)localFetchDescriptor;
- (id)localFetchPredicate;
- (id)maxCacheAge;
- (id)preferLocalFetchDescriptor;
- (id)remoteRequest;
- (Class)remoteRequestClass;
- (void)setBssids:(id)arg1;
- (void)setLocalFetchDescriptor:(id)arg1;
- (void)setLocalFetchPredicate:(id)arg1;
- (void)setMaxCacheAge:(id)arg1;
- (void)setPreferLocalFetchDescriptor:(id)arg1;
- (void)setRemoteRequest:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
