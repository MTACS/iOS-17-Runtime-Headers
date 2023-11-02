
@interface CKContactsSearchManager : NSObject <CNAutocompleteSearchConsumer, CNAutocompleteUIFetchDelegate> {
    bool  _biasForOutgoingInteraction;
    NSNumber * _currentSearchTaskID;
    <CKContactsSearchManagerDelegate> * _delegate;
    NSCharacterSet * _emojiCharacterSet;
    NSArray * _enteredRecipients;
    CNAutocompleteSearchManager * _searchManager;
    NSMutableArray * _searchResults;
    NSString * _searchText;
    bool  _suppressGroupSuggestions;
    bool  _zkwGroupSuggestionsEnabled;
}

@property (nonatomic) bool biasForOutgoingInteraction;
@property (nonatomic, retain) NSNumber *currentSearchTaskID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKContactsSearchManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSCharacterSet *emojiCharacterSet;
@property (nonatomic, retain) NSArray *enteredRecipients;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CNAutocompleteSearchManager *searchManager;
@property (nonatomic, retain) NSMutableArray *searchResults;
@property (nonatomic, retain) NSString *searchText;
@property (readonly) Class superclass;
@property (nonatomic) bool suppressGroupSuggestions;
@property (nonatomic) bool zkwGroupSuggestionsEnabled;

- (void).cxx_destruct;
- (id)_cullOldResults:(id)arg1;
- (id)_filterGroupResults:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeForSearchTerm:(id)arg1 inTarget:(id)arg2 tokenizedByCharacterSet:(id)arg3;
- (id)_sortResultsByDate:(id)arg1;
- (id)_sortSearchResultsWithCoreRecentsResults:(id)arg1 displayNameMatches:(id)arg2 participantNameMatches:(id)arg3;
- (void)beganNetworkActivity;
- (bool)biasForOutgoingInteraction;
- (void)cancelSearch;
- (void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2;
- (id)createAutocompelteGroupMembersFromParticipants:(id)arg1;
- (id)currentSearchTaskID;
- (void)dealloc;
- (id)delegate;
- (void)didSelectRecipient:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)emojiCharacterSet;
- (void)endedNetworkActivity;
- (id)enteredRecipients;
- (void)finishedSearchingForAutocompleteResults;
- (void)finishedTaskWithID:(id)arg1;
- (bool)getSupplementalGroupsForSearchQuery:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (bool)isMAIDGroupsEnabled;
- (id)matchingConversationWithGuid:(id)arg1;
- (id)nameGroupSearchResults;
- (id)participantMatchGroupResults;
- (id)participantMatchResultsForSearchTerm:(id)arg1;
- (void)removeRecipient:(id)arg1;
- (id)searchManager;
- (id)searchResults;
- (id)searchText;
- (void)searchWithText:(id)arg1;
- (void)setBiasForOutgoingInteraction:(bool)arg1;
- (void)setCurrentSearchTaskID:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEmojiCharacterSet:(id)arg1;
- (void)setEnteredRecipients:(id)arg1;
- (void)setSearchManager:(id)arg1;
- (void)setSearchResults:(id)arg1;
- (void)setSearchText:(id)arg1;
- (void)setSuppressGroupSuggestions:(bool)arg1;
- (void)setZkwGroupSuggestionsEnabled:(bool)arg1;
- (bool)shouldIncludeGroupInResults:(id)arg1;
- (bool)suppressGroupSuggestions;
- (id)zkwGroupSuggestions;
- (bool)zkwGroupSuggestionsEnabled;

@end
