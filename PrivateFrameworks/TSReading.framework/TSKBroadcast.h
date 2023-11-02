
@interface TSKBroadcast : NSObject

+ (void)asyncNotificationWithAccessController:(id)arg1 changeNotifier:(id)arg2 changeGroup:(id)arg3;
+ (void)asyncNotificationWithAccessController:(id)arg1 changeNotifier:(id)arg2 changeKind:(int)arg3 details:(id)arg4 changeSource:(id)arg5;
+ (void)syncNotificationWithAccessController:(id)arg1 changeNotifier:(id)arg2 changeGroup:(id)arg3;
+ (void)syncNotificationWithAccessController:(id)arg1 changeNotifier:(id)arg2 changeKind:(int)arg3 details:(id)arg4 changeSource:(id)arg5;
+ (void)twoPhaseNotificationWithAccessController:(id)arg1 changeNotifier:(id)arg2 changeGroup:(id)arg3;
+ (void)twoPhaseNotificationWithAccessController:(id)arg1 changeNotifier:(id)arg2 changeKind:(int)arg3 details:(id)arg4 changeSource:(id)arg5;

@end
