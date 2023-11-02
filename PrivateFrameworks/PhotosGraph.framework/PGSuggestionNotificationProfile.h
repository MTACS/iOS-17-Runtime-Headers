
@interface PGSuggestionNotificationProfile : NSObject {
    NSDate * _dateOfLastNotification;
    bool  _eligibleForNotification;
    NSArray * _existingSuggestions;
    NSObject<OS_os_log> * _loggingConnection;
    NSSet * _shareParticipantContactIdentifiers;
    unsigned char  _userType;
}

@property (nonatomic, readonly) NSDate *dateOfLastNotification;
@property (nonatomic, readonly) bool eligibleForNotification;
@property (nonatomic) NSObject<OS_os_log> *loggingConnection;
@property (nonatomic, readonly) unsigned char userType;

+ (unsigned char)_requiredNotificationQualityForUserType:(unsigned char)arg1;
+ (double)_requiredTimeIntervalFromLastNotificationForUserType:(unsigned char)arg1;

- (void).cxx_destruct;
- (void)_determineUserTypeAndEligibility;
- (id)dateOfLastNotification;
- (bool)eligibleForNotification;
- (id)initWithExistingSuggestions:(id)arg1;
- (id)loggingConnection;
- (unsigned char)notificationQualityForEnrichableEvent:(id)arg1;
- (unsigned char)notificationQualityForHighlightNode:(id)arg1;
- (void)setLoggingConnection:(id)arg1;
- (id)shareParticipantContactIdentifiers;
- (bool)shouldNotifyForSuggestion:(id)arg1 withOptions:(id)arg2;
- (unsigned char)userType;

@end
