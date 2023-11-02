
@interface _UNNotificationContactService : NSObject {
    CNContactStore * _curatedContactStore;
    _UNCNContactResolver * _resolver;
    NSCache * _resultsByServiceRecord;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_matchForContact:(id)arg1 bundleIdentifier:(id)arg2;
- (void)_setResult:(id)arg1 forContact:(id)arg2 bundleIdentifier:(id)arg3;
- (bool)canAddToCuratedContacts:(id)arg1 bundleIdentifier:(id)arg2;
- (void)confirmCuratedContactSuggestion:(bool)arg1 forContact:(id)arg2 bundleIdentifier:(id)arg3;
- (id)curatedContactForContact:(id)arg1 bundleIdentifier:(id)arg2 keysToFetch:(id)arg3;
- (id)curatedContactMatchDetailsForContact:(id)arg1 bundleIdentifier:(id)arg2;
- (void)didAddToCuratedContactsForContact:(id)arg1 bundleIdentifier:(id)arg2 cnContactIdentifier:(id)arg3;
- (id)initWithResolver:(id)arg1;
- (id)newCuratedContactForContact:(id)arg1 imageData:(id)arg2 bundleIdentifier:(id)arg3;
- (id)updateServiceWithContact:(id)arg1 bundleIdentifier:(id)arg2;

@end
