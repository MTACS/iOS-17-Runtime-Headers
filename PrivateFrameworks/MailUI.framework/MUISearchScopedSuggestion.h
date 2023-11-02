
@interface MUISearchScopedSuggestion : MUISearchAtomSuggestion <NSSecureCoding> {
    unsigned long long  _selectedScopeIndex;
    MUISearchAtomSuggestion * _suggestion;
}

@property (nonatomic, readonly) NSPredicate *predicate;
@property (nonatomic, readonly) MUISearchSuggestionCategoryScope *selectedScope;
@property (nonatomic) unsigned long long selectedScopeIndex;
@property (nonatomic, readonly) MUISearchAtomSuggestion *suggestion;

+ (id)scopedSuggestion:(id)arg1;
+ (id)scopedSuggestion:(id)arg1 selectedScopeIndex:(unsigned long long)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)atomImage;
- (id)atomTitle;
- (id)category;
- (id)contactIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)initWithSuggestion:(id)arg1;
- (id)initWithSuggestion:(id)arg1 selectedScopeIndex:(unsigned long long)arg2;
- (id)predicate;
- (id)predicateWithSelectedScope:(id)arg1;
- (id)selectedScope;
- (unsigned long long)selectedScopeIndex;
- (void)setSelectedScopeIndex:(unsigned long long)arg1;
- (id)subtitle;
- (id)suggestion;
- (id)title;

@end
