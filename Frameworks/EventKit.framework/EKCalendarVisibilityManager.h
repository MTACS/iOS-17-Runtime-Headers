
@interface EKCalendarVisibilityManager : NSObject <CADCalendarVisibilityManager, CalActivatable> {
    bool  _active;
    EKEventStore * _eventStore;
    EKSource * _limitedToSource;
    CalDarwinNotificationListener * _notificationListener;
    id /* block */  _visibilityChangedCallback;
}

@property bool active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) EKEventStore *eventStore;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *invisibleCalendars;
@property (nonatomic, readonly) NSArray *invisibleCalendarsForAllIdentities;
@property (nonatomic, readonly) EKSource *limitedToSource;
@property (nonatomic, readonly) CalDarwinNotificationListener *notificationListener;
@property (readonly) Class superclass;
@property (nonatomic, readonly) id /* block */ visibilityChangedCallback;
@property (nonatomic, readonly) NSArray *visibleCalendars;
@property (nonatomic, readonly) NSArray *visibleCalendarsForAllIdentities;

+ (id)_defaultQueue;
+ (id)deselectedCalendarIdentifiers;
+ (id)focusModeConfigurationChangedName;
+ (void)setUnselectedCalendarIdentifiersForFocusMode:(id)arg1;
+ (id)unselectedCalendarIdentifiersForFocusMode;
+ (id)unselectedCalendarsForFocusModeInEventStore:(id)arg1;
+ (id)visibilityChangedNotificationName;

- (void).cxx_destruct;
- (id)_calendarsThatAreVisible:(bool)arg1 filteredByIdentity:(bool)arg2;
- (id)_deselectedCalendarIdentifiers;
- (void)activate;
- (bool)active;
- (void)deactivate;
- (void)dealloc;
- (id)eventStore;
- (id)initWithEventStore:(id)arg1 limitedToSource:(id)arg2 visibilityChangedCallback:(id /* block */)arg3;
- (id)initWithEventStore:(id)arg1 limitedToSource:(id)arg2 visibilityChangedCallback:(id /* block */)arg3 queue:(id)arg4;
- (id)initWithEventStore:(id)arg1 limitedToSource:(id)arg2 visibilityChangedCallback:(id /* block */)arg3 queue:(id)arg4 activate:(bool)arg5;
- (id)initWithEventStore:(id)arg1 visibilityChangedCallback:(id /* block */)arg2;
- (id)initWithEventStore:(id)arg1 visibilityChangedCallback:(id /* block */)arg2 queue:(id)arg3;
- (id)invisibleCalendars;
- (id)invisibleCalendarsForAllIdentities;
- (id)limitedToSource;
- (id)notificationListener;
- (void)setActive:(bool)arg1;
- (id /* block */)visibilityChangedCallback;
- (id)visibleCalendars;
- (id)visibleCalendarsForAllIdentities;

@end
