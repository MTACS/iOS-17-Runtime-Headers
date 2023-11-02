
@interface CKSearchTokenFilter : NSObject {
    unsigned long long  _contentType;
    CKConversation * _conversation;
    unsigned long long  _filterOptions;
    NSString * _itemIdentifier;
    NSString * _queryStringForConversationSearch;
    NSString * _queryStringForMessageTypeSearch;
    NSArray * _tokenAddresses;
}

@property (nonatomic) unsigned long long contentType;
@property (nonatomic) CKConversation *conversation;
@property (nonatomic) unsigned long long filterOptions;
@property (nonatomic, copy) NSString *itemIdentifier;
@property (nonatomic, retain) NSString *queryStringForConversationSearch;
@property (nonatomic, retain) NSString *queryStringForMessageTypeSearch;
@property (nonatomic, retain) NSArray *tokenAddresses;

- (void).cxx_destruct;
- (id)_conditionalForHandles:(id)arg1 usingKey:(id)arg2;
- (unsigned long long)contentType;
- (id)conversation;
- (unsigned long long)filterOptions;
- (bool)hasFilterOption:(unsigned long long)arg1;
- (id)initWithContentType:(unsigned long long)arg1 filterOptions:(unsigned long long)arg2 itemIdentifier:(id)arg3 tokenAddresses:(id)arg4;
- (id)initWithContentType:(unsigned long long)arg1 itemIdentifier:(id)arg2;
- (id)itemIdentifier;
- (id)queryStringForConversationSearch;
- (id)queryStringForMessageTypeSearch;
- (void)setContentType:(unsigned long long)arg1;
- (void)setConversation:(id)arg1;
- (void)setFilterOptions:(unsigned long long)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setQueryStringForConversationSearch:(id)arg1;
- (void)setQueryStringForMessageTypeSearch:(id)arg1;
- (void)setTokenAddresses:(id)arg1;
- (id)tokenAddresses;

@end
