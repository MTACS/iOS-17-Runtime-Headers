
@interface HFStateRestorationSettings : NSObject {
    int  _notifyRegistrationToken;
    NSHashTable * _observers;
}

@property (nonatomic, readonly) int notifyRegistrationToken;
@property (nonatomic, readonly) NSHashTable *observers;
@property (nonatomic, copy) NSString *selectedHomeAppTabIdentifier;
@property (nonatomic, copy) NSUUID *selectedHomeIdentifier;
@property (nonatomic, readonly, copy) NSUUID *selectedRoomIdentifierForSelectedHome;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_homeAppPreferencesValueForKey:(id)arg1 ofClass:(Class)arg2;
- (id)_roomKeyForHomeIdentifier:(id)arg1;
- (void)_selectedHomeDidChange;
- (void)_setHomeAppPreferencesValue:(id)arg1 forKey:(id)arg2;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (int)notifyRegistrationToken;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (void)saveSelectedRoomIdentifier:(id)arg1 forHomeIdentifier:(id)arg2;
- (id)selectedHomeAppTabIdentifier;
- (id)selectedHomeIdentifier;
- (id)selectedRoomIdentifierForHomeIdentifier:(id)arg1;
- (id)selectedRoomIdentifierForSelectedHome;
- (void)setSelectedHomeAppTabIdentifier:(id)arg1;
- (void)setSelectedHomeIdentifier:(id)arg1;
- (void)syncToNanoPrefs;

@end
