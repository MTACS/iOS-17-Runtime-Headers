
@interface TCSSuggestionsDataSource : NSObject <TCSSuggestionsObserver> {
    <TCSSuggestionsDataSourceDelegate> * _delegate;
    NSArray * _suggestedContacts;
    TCSSuggestions * _suggestions;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TCSSuggestionsDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasSuggestions;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *suggestedContacts;
@property (nonatomic, retain) TCSSuggestions *suggestions;
@property (readonly) Class superclass;

+ (id)descriptorForRequiredKeys;

- (void).cxx_destruct;
- (void)_handleContactStoreDidChange:(id)arg1;
- (void)_handleDeviceFirstUnlock;
- (void)_handlePersonNamePreferencesChangeNotification;
- (void)_invalidate;
- (void)_notifyDelegateSuggestionsChanged;
- (id)_sortedContactsArrayFromArray:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (bool)hasSuggestions;
- (id)initWithSuggestions:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSuggestedContacts:(id)arg1;
- (void)setSuggestions:(id)arg1;
- (id)suggestedContacts;
- (id)suggestions;
- (void)suggestionsDidChange:(id)arg1;

@end
