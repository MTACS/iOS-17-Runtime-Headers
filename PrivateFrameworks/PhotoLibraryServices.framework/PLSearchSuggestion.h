
@interface PLSearchSuggestion : NSObject {
    NSString * _contentString;
    unsigned long long  _indexCategory;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _matchRangeOfSearchText;
    unsigned long long  _matchedAssetsCount;
    unsigned long long  _matchedCollectionsCount;
    unsigned long long  _psiGroupId;
    unsigned long long  _psiOwningGroupId;
    unsigned long long  _suggestionType;
}

@property (nonatomic, readonly) NSString *contentString;
@property (nonatomic, readonly) unsigned long long indexCategory;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } matchRangeOfSearchText;
@property (nonatomic, readonly) unsigned long long matchedAssetsCount;
@property (nonatomic, readonly) unsigned long long matchedCollectionsCount;
@property (nonatomic, readonly) unsigned long long psiGroupId;
@property (nonatomic, readonly) unsigned long long psiOwningGroupId;
@property (nonatomic, readonly) unsigned long long suggestionType;
@property (nonatomic, readonly) unsigned long long userCategory;

- (void).cxx_destruct;
- (id)contentString;
- (id)description;
- (unsigned long long)hash;
- (unsigned long long)indexCategory;
- (id)initWithContentString:(id)arg1 groupId:(unsigned long long)arg2 owningGroupId:(unsigned long long)arg3 matchedAssetsCount:(unsigned long long)arg4 matchedCollectionsCount:(unsigned long long)arg5 indexCategory:(unsigned long long)arg6 suggestionType:(unsigned long long)arg7 matchRangeOfSearchText:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg8;
- (bool)isEqual:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })matchRangeOfSearchText;
- (unsigned long long)matchedAssetsCount;
- (unsigned long long)matchedCollectionsCount;
- (unsigned long long)psiGroupId;
- (unsigned long long)psiOwningGroupId;
- (unsigned long long)suggestionType;
- (unsigned long long)userCategory;

@end
