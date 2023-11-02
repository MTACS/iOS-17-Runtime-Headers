
@interface SGCuratedChangeNotificationsCalendarListener : SGCuratedChangeNotificationsBaseListener {
    <NSObject> * _notificationCenterToken;
}

- (void).cxx_destruct;
- (void)startListening;
- (void)stopListening;

@end
