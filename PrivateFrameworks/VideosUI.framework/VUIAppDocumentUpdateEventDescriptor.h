
@interface VUIAppDocumentUpdateEventDescriptor : NSObject <NSCopying> {
    bool  _animated;
    unsigned long long  _type;
}

@property (nonatomic) bool animated;
@property (nonatomic) unsigned long long type;

+ (id)accountChanged;
+ (id)appDidBecomeActive;
+ (id)appRefresh;
+ (id)clearPlayHistory;
+ (id)deviceDiscoveryDataAvailable;
+ (id)entitlements;
+ (id)favorites;
+ (id)favoritesSyncCompleted;
+ (id)groupRecoCollectionVisiblityChanged;
+ (id)groupRecoUsersChanged;
+ (id)highlightsChanged;
+ (id)locationAuthorizationChanged;
+ (id)locationRetrieved;
+ (id)playActivity;
+ (id)playHistoryUpdated;
+ (id)postPlay;
+ (id)preferredVideoFormat;
+ (id)purchases;
+ (id)removeFromPlayHistory;
+ (id)restrictions;
+ (id)settings;
+ (id)upNext;
+ (id)upNextLockupArtSettingChanged;
+ (id)utsk;

- (bool)animated;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithEventType:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (void)setAnimated:(bool)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
