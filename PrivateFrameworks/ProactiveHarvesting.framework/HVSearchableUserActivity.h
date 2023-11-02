
@interface HVSearchableUserActivity : NSObject <BMIdentifiableContentEvent> {
    NSString * _persistentIdentifierOrFallback;
    CSSearchableItem * _searchableItem;
    NSUserActivity * _userActivity;
}

@property (nonatomic, readonly) double absoluteTimestamp;
@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) NSString *domainId;
@property (nonatomic, readonly) CSSearchableItem *searchableItem;
@property (nonatomic, readonly) NSString *uniqueId;
@property (nonatomic, readonly) NSUserActivity *userActivity;

+ (id)uniqueIdForPersistentIdentifier:(id)arg1;

- (void).cxx_destruct;
- (double)absoluteTimestamp;
- (id)bundleId;
- (id)domainId;
- (unsigned long long)hash;
- (id)init;
- (id)initWithUserActivity:(id)arg1 searchableItem:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)searchableItem;
- (id)uniqueId;
- (id)userActivity;

@end
