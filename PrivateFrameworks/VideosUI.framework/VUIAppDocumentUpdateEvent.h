
@interface VUIAppDocumentUpdateEvent : NSObject <NSCopying> {
    VUIAppDocumentUpdateEventDescriptor * _descriptor;
}

@property (nonatomic, retain) VUIAppDocumentUpdateEventDescriptor *descriptor;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;

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
+ (id)preferredVideoFormat;
+ (id)purchases;
+ (id)removeFromPlayHistory;
+ (id)restrictions;
+ (id)settings;
+ (id)upNextLockupArtSettingChanged;
+ (id)utsk;

- (void).cxx_destruct;
- (id)coalescedEvent:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptor;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDescriptor:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setDescriptor:(id)arg1;

@end
