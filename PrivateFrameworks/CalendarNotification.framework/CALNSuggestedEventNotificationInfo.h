
@interface CALNSuggestedEventNotificationInfo : NSObject {
    NSDate * _expirationDate;
    NSURL * _launchURL;
    NSString * _sourceClientIdentifier;
    EKCalendarSuggestionNotification * _suggestionNotification;
}

@property (nonatomic, readonly, copy) NSDate *expirationDate;
@property (nonatomic, readonly, copy) NSURL *launchURL;
@property (nonatomic, readonly, copy) NSString *sourceClientIdentifier;
@property (nonatomic, readonly) EKCalendarSuggestionNotification *suggestionNotification;

- (void).cxx_destruct;
- (id)description;
- (id)expirationDate;
- (id)initWithSourceClientIdentifier:(id)arg1 launchURL:(id)arg2 expirationDate:(id)arg3 suggestionNotification:(id)arg4;
- (id)launchURL;
- (id)sourceClientIdentifier;
- (id)suggestionNotification;

@end
