
@interface CALNEKSuggestionsServiceLogger : NSObject <CALNSuggestionsServiceLogger>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void)logEventShowedTimeToLeaveNotificationWithUniqueKey:(id)arg1;

@end
