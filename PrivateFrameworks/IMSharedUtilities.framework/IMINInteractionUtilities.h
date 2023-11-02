
@interface IMINInteractionUtilities : NSObject {
    CSSearchableIndex * _searchableIndex;
}

@property (nonatomic, retain) CSSearchableIndex *searchableIndex;

+ (id)sharedInstance;

- (void)dealloc;
- (void)deleteInteractionsWithChatGUIDs:(id)arg1;
- (void)deleteInteractionsWithMessageGUIDs:(id)arg1;
- (id)init;
- (id)searchableIndex;
- (void)setSearchableIndex:(id)arg1;

@end
