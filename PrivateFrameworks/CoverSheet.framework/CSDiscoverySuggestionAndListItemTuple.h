
@interface CSDiscoverySuggestionAndListItemTuple : NSObject {
    <ATXUserEducationSuggestion> * _discoverySuggestion;
    CSListItem * _listItem;
}

@property (nonatomic, retain) <ATXUserEducationSuggestion> *discoverySuggestion;
@property (nonatomic, retain) CSListItem *listItem;

- (void).cxx_destruct;
- (id)discoverySuggestion;
- (id)listItem;
- (void)setDiscoverySuggestion:(id)arg1;
- (void)setListItem:(id)arg1;

@end
