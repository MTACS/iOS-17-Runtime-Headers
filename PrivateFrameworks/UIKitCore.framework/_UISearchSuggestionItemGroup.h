
@interface _UISearchSuggestionItemGroup : NSObject {
    NSString * _headerTitle;
    NSArray * _suggestionItems;
}

@property (nonatomic, readonly, copy) NSString *headerTitle;
@property (nonatomic, readonly, copy) NSArray *suggestionItems;

- (void).cxx_destruct;
- (id)headerTitle;
- (id)initWithHeaderTitle:(id)arg1 suggestionItems:(id)arg2;
- (id)suggestionItems;

@end
