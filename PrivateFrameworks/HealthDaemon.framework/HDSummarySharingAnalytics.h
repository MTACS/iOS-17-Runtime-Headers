
@interface HDSummarySharingAnalytics : NSObject {
    NSDate * _askSomeoneToShareLastSelectedDate;
    double  _averageNumberAuthorizationsSharedOutPerPerson;
    long long  _maxAuthorizationsSharedOutPerPerson;
    long long  _minAuthorizationsSharedOutPerPerson;
    NSDate * _mostRecentIncomingTransactionDate;
    long long  _numberAuthorizationsSharingOut;
    long long  _numberOfAlertNotificationsEnabled;
    long long  _numberOfTrendNotificationsEnabled;
    long long  _numberOfUpdateNotificationsEnabled;
    long long  _numberPeopleSharingIn;
    long long  _numberPeopleSharingOut;
    NSDate * _sharingAuthorizationLastViewedDate;
    NSDate * _sharingContactOptionLastSelectedDate;
}

@property (nonatomic, copy) NSDate *askSomeoneToShareLastSelectedDate;
@property (nonatomic) double averageNumberAuthorizationsSharedOutPerPerson;
@property (nonatomic) long long maxAuthorizationsSharedOutPerPerson;
@property (nonatomic) long long minAuthorizationsSharedOutPerPerson;
@property (nonatomic, copy) NSDate *mostRecentIncomingTransactionDate;
@property (nonatomic) long long numberAuthorizationsSharingOut;
@property (nonatomic) long long numberOfAlertNotificationsEnabled;
@property (nonatomic) long long numberOfTrendNotificationsEnabled;
@property (nonatomic) long long numberOfUpdateNotificationsEnabled;
@property (nonatomic) long long numberPeopleSharingIn;
@property (nonatomic) long long numberPeopleSharingOut;
@property (nonatomic, copy) NSDate *sharingAuthorizationLastViewedDate;
@property (nonatomic, copy) NSDate *sharingContactOptionLastSelectedDate;

- (void).cxx_destruct;
- (id)askSomeoneToShareLastSelectedDate;
- (double)averageNumberAuthorizationsSharedOutPerPerson;
- (long long)maxAuthorizationsSharedOutPerPerson;
- (long long)minAuthorizationsSharedOutPerPerson;
- (id)mostRecentIncomingTransactionDate;
- (long long)numberAuthorizationsSharingOut;
- (long long)numberOfAlertNotificationsEnabled;
- (long long)numberOfTrendNotificationsEnabled;
- (long long)numberOfUpdateNotificationsEnabled;
- (long long)numberPeopleSharingIn;
- (long long)numberPeopleSharingOut;
- (void)setAskSomeoneToShareLastSelectedDate:(id)arg1;
- (void)setAverageNumberAuthorizationsSharedOutPerPerson:(double)arg1;
- (void)setMaxAuthorizationsSharedOutPerPerson:(long long)arg1;
- (void)setMinAuthorizationsSharedOutPerPerson:(long long)arg1;
- (void)setMostRecentIncomingTransactionDate:(id)arg1;
- (void)setNumberAuthorizationsSharingOut:(long long)arg1;
- (void)setNumberOfAlertNotificationsEnabled:(long long)arg1;
- (void)setNumberOfTrendNotificationsEnabled:(long long)arg1;
- (void)setNumberOfUpdateNotificationsEnabled:(long long)arg1;
- (void)setNumberPeopleSharingIn:(long long)arg1;
- (void)setNumberPeopleSharingOut:(long long)arg1;
- (void)setSharingAuthorizationLastViewedDate:(id)arg1;
- (void)setSharingContactOptionLastSelectedDate:(id)arg1;
- (id)sharingAuthorizationLastViewedDate;
- (id)sharingContactOptionLastSelectedDate;

@end
