
@interface SBHIconLibraryQuery : NSObject <NSCopying> {
    NSString * _keyboardLanguageHint;
    NSArray * _markedTextArray;
    UITextRange * _markedTextRange;
    NSPredicate * _predicate;
    NSString * _searchString;
}

@property (nonatomic, readonly) id /* block */ comparator;
@property (nonatomic, copy) NSString *keyboardLanguageHint;
@property (nonatomic, readonly, copy) NSArray *markedTextArray;
@property (nonatomic, readonly, copy) UITextRange *markedTextRange;
@property (nonatomic, readonly) NSPredicate *predicate;
@property (nonatomic, readonly, copy) NSString *searchString;

+ (bool)string:(id)arg1 matchesSearchString:(id)arg2;

- (void).cxx_destruct;
- (id /* block */)_composeComparator:(id /* block */)arg1 andComparator:(id /* block */)arg2;
- (bool)_hasSearchString;
- (id /* block */)aToZComparator;
- (id /* block */)comparator;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithMarkedTextSearchString:(id)arg1 markedTextRange:(id)arg2 markedTextArray:(id)arg3;
- (id)initWithSearchString:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)keyboardLanguageHint;
- (id)markedTextArray;
- (id)markedTextRange;
- (id)predicate;
- (id /* block */)prefixComparator;
- (id)searchString;
- (void)setKeyboardLanguageHint:(id)arg1;

@end
