
@interface ICSearchResultConfiguration : NSObject {
    NSManagedObjectID * _foundAttachmentObjectID;
    bool  _isTopHit;
    NSString * _searchString;
    unsigned long long  _searchStringLength;
    unsigned long long  _searchSuggestionType;
    ICSortableSearchableItem * _sortableSearchableItem;
}

@property (nonatomic, readonly) NSManagedObjectID *foundAttachmentObjectID;
@property (nonatomic, readonly) bool isTopHit;
@property (nonatomic, readonly) NSString *searchString;
@property (nonatomic, readonly) unsigned long long searchStringLength;
@property (nonatomic, readonly) unsigned long long searchSuggestionType;
@property (nonatomic, readonly) ICSortableSearchableItem *sortableSearchableItem;

- (void).cxx_destruct;
- (id)foundAttachmentObjectID;
- (unsigned long long)hash;
- (id)initWithSearchString:(id)arg1 searchSuggestionType:(unsigned long long)arg2 isTopHit:(bool)arg3 foundAttachmentObjectID:(id)arg4 sortableSearchableItem:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isTopHit;
- (id)searchString;
- (unsigned long long)searchStringLength;
- (unsigned long long)searchSuggestionType;
- (id)sortableSearchableItem;

@end
