
@protocol MapsSuggestionsFirstUnlockProtocol <MapsSuggestionsTrigger, MapsSuggestionsTriggerObserver>

@required

- (bool)hasDeviceBeenUnlocked;
- (id)initWithName:(NSString *)arg1;

@end
