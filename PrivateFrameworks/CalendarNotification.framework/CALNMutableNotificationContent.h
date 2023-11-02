
@interface CALNMutableNotificationContent : CALNNotificationContent

@property (nonatomic, copy) NSString *body;
@property (nonatomic, copy) NSString *categoryIdentifier;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic, copy) NSURL *defaultActionURL;
@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic, copy) NSString *filterCriteria;
@property (nonatomic, copy) NSString *iconIdentifier;
@property (nonatomic) unsigned long long interruptionLevel;
@property (nonatomic, copy) NSArray *peopleIdentifiers;
@property (nonatomic, copy) NSString *sectionIdentifier;
@property (nonatomic) bool shouldHideTime;
@property (nonatomic) bool shouldSuppressSyncDismissalWhenRemoved;
@property (nonatomic, copy) CALNNotificationSound *sound;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *summaryArgument;
@property (nonatomic) unsigned long long summaryArgumentCount;
@property (nonatomic, copy) NSString *threadIdentifier;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSDictionary *userInfo;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setBody:(id)arg1;
- (void)setCategoryIdentifier:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDefaultActionURL:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setFilterCriteria:(id)arg1;
- (void)setIconIdentifier:(id)arg1;
- (void)setInterruptionLevel:(unsigned long long)arg1;
- (void)setPeopleIdentifiers:(id)arg1;
- (void)setSectionIdentifier:(id)arg1;
- (void)setShouldHideTime:(bool)arg1;
- (void)setShouldSuppressSyncDismissalWhenRemoved:(bool)arg1;
- (void)setSound:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSummaryArgument:(id)arg1;
- (void)setSummaryArgumentCount:(unsigned long long)arg1;
- (void)setThreadIdentifier:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setUserInfoValue:(id)arg1 forKey:(id)arg2;

@end
