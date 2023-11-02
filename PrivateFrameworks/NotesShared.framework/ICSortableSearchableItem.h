
@interface ICSortableSearchableItem : NSObject {
    NSArray * _attachmentUniqueIdentifiers;
    NSDate * _creationDate;
    NSDictionary * _highlightInfo;
    bool  _isPrefixMatch;
    NSString * _language;
    NSDate * _modificationDate;
    unsigned long long  _modificationDateBucket;
    bool  _needsLazyInitialization;
    ICRankingQueriesDefinition * _rankingQueriesDefinition;
    double  _rankingScore;
    unsigned long long  _relevanceBitField;
    unsigned long long  _searchResultType;
    NSString * _searchString;
    CSSearchableItem * _searchableItem;
}

@property (nonatomic, readonly) NSArray *attachmentUniqueIdentifiers;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSDictionary *highlightInfo;
@property (nonatomic, readonly) bool isPrefixMatch;
@property (nonatomic, retain) NSString *language;
@property (nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, readonly) unsigned long long modificationDateBucket;
@property (nonatomic) bool needsLazyInitialization;
@property (nonatomic, retain) ICRankingQueriesDefinition *rankingQueriesDefinition;
@property (nonatomic, readonly) double rankingScore;
@property (nonatomic, readonly) unsigned long long relevanceBitField;
@property (nonatomic, readonly) unsigned long long searchResultType;
@property (nonatomic, retain) NSString *searchString;
@property (nonatomic, readonly) CSSearchableItem *searchableItem;

+ (id)sortDescriptorsForRankingStrategy:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)attachmentUniqueIdentifiers;
- (id)creationDate;
- (unsigned long long)hash;
- (id)highlightInfo;
- (id)initWithSearchableItem:(id)arg1 highlightInfo:(id)arg2 rankingScore:(double)arg3 attachmentUniqueIdentifiers:(id)arg4;
- (id)initWithSearchableItem:(id)arg1 searchString:(id)arg2 rankingQueriesDefinition:(id)arg3 rankingScore:(double)arg4 attachmentUniqueIdentifiers:(id)arg5 language:(id)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isPrefixMatch;
- (id)language;
- (void)lazilyInitializeHighlightInfoAndIsPrefixMatchIfNecessary;
- (id)modificationDate;
- (unsigned long long)modificationDateBucket;
- (bool)needsLazyInitialization;
- (id)rankingQueriesDefinition;
- (double)rankingScore;
- (unsigned long long)relevanceBitField;
- (unsigned long long)searchResultType;
- (id)searchString;
- (id)searchableItem;
- (void)setLanguage:(id)arg1;
- (void)setNeedsLazyInitialization:(bool)arg1;
- (void)setRankingQueriesDefinition:(id)arg1;
- (void)setSearchString:(id)arg1;

@end
