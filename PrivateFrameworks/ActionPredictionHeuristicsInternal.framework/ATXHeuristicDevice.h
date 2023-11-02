
@interface ATXHeuristicDevice : NSObject {
    CNContactStore * _contactStoreLazy;
    EKEventStore * _eventStore;
    CNFavorites * _favoriteContactsLazy;
    ATXLocationManager * _locationManager;
    bool  _meContactChecked;
    CNContact * _meContactLazy;
    NSDate * _now;
    NSMutableDictionary * _wrappedObjects;
}

@property (nonatomic, readonly) EKEventStore *eventStore;
@property (nonatomic, readonly) ATXLocationManager *locationManager;
@property (nonatomic, readonly) NSDate *now;

+ (id)sharedAlarmManager;

- (void).cxx_destruct;
- (id)_calendarVisibilityManager;
- (id)_contactForPredicate:(id)arg1;
- (id)_contactKeysToFetch;
- (id)_dictContactForIdentifier:(id)arg1;
- (id)_dictContactForParticipant:(id)arg1 contactCache:(id)arg2;
- (id)_dictForAttachment:(id)arg1;
- (id)_unwrap:(id)arg1;
- (id)_wrap:(id)arg1;
- (void)accessFavoriteContacts:(id /* block */)arg1;
- (id)contactForParticipant:(id)arg1;
- (id)contactStore;
- (id)contactsForPredicate:(id)arg1;
- (void)dealloc;
- (id)dictContactForCNContact:(id)arg1;
- (id)dictForEvent:(id)arg1;
- (id)dictForEvent:(id)arg1 contactCache:(id)arg2;
- (id)eventStore;
- (id)init;
- (id)initWithLocationManager:(id)arg1;
- (id)locationManager;
- (id)meContact;
- (id)now;
- (id)organizerContactWithEvent:(id)arg1;
- (id)resolveContact:(id)arg1;
- (void)setNow:(id)arg1;
- (void)updateMeContact;
- (id)visibleCalendarsInCurrentFocus;
- (id)visibleCalendarsRegardlessOfFocus;
- (id)wrap:(id)arg1;

@end
