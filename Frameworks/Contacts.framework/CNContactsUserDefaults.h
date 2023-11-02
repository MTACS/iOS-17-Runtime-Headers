
@interface CNContactsUserDefaults : NSObject

@property (nonatomic, readonly, copy) NSString *countryCode;
@property (nonatomic) long long displayNameOrder;
@property (nonatomic) long long shortNameFormat;
@property (getter=isShortNameFormatEnabled, nonatomic) bool shortNameFormatEnabled;
@property (nonatomic) bool shortNameFormatPrefersNicknames;
@property (nonatomic, readonly) long long sortOrder;

+ (void)flushSharedInstance;
+ (id)sharedDefaults;

- (id)changeNotificationName;
- (id)countryCode;
- (long long)displayNameOrder;
- (id)filteredGroupAndContainerIDs;
- (id)init;
- (bool)isShortNameFormatEnabled;
- (long long)lastIgnoredNewDuplicatesCount;
- (long long)newContactDisplayNameOrder;
- (void)setDisplayNameOrder:(long long)arg1;
- (void)setFilteredGroupAndContainerIDs:(id)arg1;
- (void)setLastIgnoredNewDuplicatesCount:(long long)arg1;
- (void)setShortNameFormat:(long long)arg1;
- (void)setShortNameFormatEnabled:(bool)arg1;
- (void)setShortNameFormatPrefersNicknames:(bool)arg1;
- (long long)shortNameFormat;
- (bool)shortNameFormatPrefersNicknames;
- (long long)sortOrder;

@end
