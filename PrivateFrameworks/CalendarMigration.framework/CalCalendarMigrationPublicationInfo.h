
@interface CalCalendarMigrationPublicationInfo : NSObject {
    NSString * _accountIdentifier;
    bool  _automaticallyPublishChanges;
    NSURL * _calendarDirectory;
    NSString * _calendarUUID;
    bool  _filterAlarms;
    bool  _filterAttachments;
    bool  _filterTitleAndNotes;
    NSString * _password;
    NSURL * _publishedURL;
    NSDate * _refreshDate;
    NSString * _username;
}

@property (nonatomic, retain) NSString *accountIdentifier;
@property (nonatomic) bool automaticallyPublishChanges;
@property (nonatomic, readonly) NSURL *calendarDirectory;
@property (nonatomic, retain) NSString *calendarUUID;
@property (nonatomic) bool filterAlarms;
@property (nonatomic) bool filterAttachments;
@property (nonatomic) bool filterTitleAndNotes;
@property (nonatomic, retain) NSString *password;
@property (nonatomic, retain) NSURL *publishedURL;
@property (nonatomic, retain) NSDate *refreshDate;
@property (nonatomic, retain) NSString *username;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (bool)automaticallyPublishChanges;
- (id)calendarDirectory;
- (id)calendarUUID;
- (id)dictionaryForAccountProperties;
- (bool)filterAlarms;
- (bool)filterAttachments;
- (bool)filterTitleAndNotes;
- (id)initWithPublishedURL:(id)arg1 calendarDirectory:(id)arg2 calendarUUID:(id)arg3;
- (id)password;
- (id)publishedURL;
- (id)refreshDate;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAutomaticallyPublishChanges:(bool)arg1;
- (void)setCalendarUUID:(id)arg1;
- (void)setFilterAlarms:(bool)arg1;
- (void)setFilterAttachments:(bool)arg1;
- (void)setFilterTitleAndNotes:(bool)arg1;
- (void)setPassword:(id)arg1;
- (void)setPublishedURL:(id)arg1;
- (void)setRefreshDate:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)username;

@end
