
@interface PPNotificationManagerGuardedData : NSObject {
    PPNotificationHandler * _calendarHandler;
    EKCalendarVisibilityManager * _calendarVisibilityManager;
    CNContactStore * _cnStore;
    PPNotificationHandler * _contactsHandler;
    <NSObject> * _contactsToken;
    EKEventStore * _ekStore;
    PPNotificationHandler * _eventKitHandler;
    <NSObject> * _eventKitToken;
    <NSObject> * _meCardDonationToken;
    PPNotificationHandler * _meCardHandler;
    <NSObject> * _meCardToken;
    PPNotificationHandler * _portraitChangeHandler;
    int  _portraitChangeToken;
    PPNotificationHandler * _portraitInvalidationHandler;
    int  _portraitInvalidationToken;
    PPNotificationHandler * _suggestionsHandler;
    <SGSuggestionsServiceContactsProtocol> * _suggestionsService;
    id  _suggestionsToken;
}

- (void).cxx_destruct;
- (id)description;

@end
