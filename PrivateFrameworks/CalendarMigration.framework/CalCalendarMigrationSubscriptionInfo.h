
@interface CalCalendarMigrationSubscriptionInfo : NSObject {
    NSString * _calDAVPath;
    NSURL * _calendarDirectory;
    bool  _disableAlarms;
    bool  _filterAlarms;
    bool  _filterAttachments;
    bool  _insecureConnectionApproved;
    bool  _isManagedByServer;
    NSString * _password;
    NSString * _principalUid;
    double  _refreshInterval;
    NSString * _subscriptionURL;
    NSString * _subscriptionURLWithUsername;
    NSString * _title;
    NSString * _username;
}

@property (nonatomic, retain) NSString *calDAVPath;
@property (nonatomic, readonly) NSURL *calendarDirectory;
@property (nonatomic) bool disableAlarms;
@property (nonatomic) bool filterAlarms;
@property (nonatomic) bool filterAttachments;
@property (nonatomic) bool insecureConnectionApproved;
@property (nonatomic) bool isManagedByServer;
@property (nonatomic, retain) NSString *password;
@property (nonatomic, readonly) NSString *principalUid;
@property (nonatomic) double refreshInterval;
@property (nonatomic, readonly) NSString *subscriptionURL;
@property (nonatomic, readonly) NSString *subscriptionURLWithUsername;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *username;

- (void).cxx_destruct;
- (id)_dictionaryForAccountProperties;
- (id)calDAVPath;
- (id)calendarDirectory;
- (id)dictionaryForAccountProperties;
- (id)dictionaryForParentAccountProperties;
- (bool)disableAlarms;
- (bool)filterAlarms;
- (bool)filterAttachments;
- (id)initWithCalendarDirectory:(id)arg1 subscriptionURL:(id)arg2 username:(id)arg3 principalUid:(id)arg4;
- (bool)insecureConnectionApproved;
- (bool)isManagedByServer;
- (id)password;
- (id)principalUid;
- (double)refreshInterval;
- (void)setCalDAVPath:(id)arg1;
- (void)setDisableAlarms:(bool)arg1;
- (void)setFilterAlarms:(bool)arg1;
- (void)setFilterAttachments:(bool)arg1;
- (void)setInsecureConnectionApproved:(bool)arg1;
- (void)setIsManagedByServer:(bool)arg1;
- (void)setPassword:(id)arg1;
- (void)setRefreshInterval:(double)arg1;
- (void)setTitle:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)subscriptionURL;
- (id)subscriptionURLWithUsername;
- (id)title;
- (id)username;

@end
