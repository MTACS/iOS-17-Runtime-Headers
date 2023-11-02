
@interface CALNCalendarResourceChangedNotificationInfo : NSObject {
    bool  _allDay;
    EKCalendarResourceChangeNotification * _calendarNotification;
    unsigned int  _changeType;
    NSDate * _date;
    NSDate * _expirationDate;
    bool  _isDelegate;
    NSURL * _launchURL;
    NSString * _sourceClientIdentifier;
    NSString * _sourceIdentifier;
    NSString * _sourceTitle;
    NSTimeZone * _timeZone;
}

@property (nonatomic, readonly) bool allDay;
@property (nonatomic, readonly) EKCalendarResourceChangeNotification *calendarNotification;
@property (nonatomic, readonly) unsigned int changeType;
@property (nonatomic, readonly, copy) NSDate *date;
@property (nonatomic, readonly, copy) NSDate *expirationDate;
@property (nonatomic, readonly) bool isDelegate;
@property (nonatomic, readonly, copy) NSURL *launchURL;
@property (nonatomic, readonly, copy) NSString *sourceClientIdentifier;
@property (nonatomic, readonly, copy) NSString *sourceIdentifier;
@property (nonatomic, readonly, copy) NSString *sourceTitle;
@property (nonatomic, readonly, copy) NSTimeZone *timeZone;

- (void).cxx_destruct;
- (bool)allDay;
- (id)calendarNotification;
- (unsigned int)changeType;
- (id)date;
- (id)description;
- (id)expirationDate;
- (id)initWithSourceClientIdentifier:(id)arg1 calendarNotification:(id)arg2 changeType:(unsigned int)arg3 date:(id)arg4 allDay:(bool)arg5 timeZone:(id)arg6 expirationDate:(id)arg7 launchURL:(id)arg8 isDelegate:(bool)arg9 sourceTitle:(id)arg10 sourceIdentifier:(id)arg11;
- (bool)isDelegate;
- (id)launchURL;
- (id)sourceClientIdentifier;
- (id)sourceIdentifier;
- (id)sourceTitle;
- (id)timeZone;

@end
