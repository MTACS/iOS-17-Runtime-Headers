
@interface ICFilterSelection : NSObject <NSCopying> {
    NSArray * _filterTypeSelections;
    bool  _includeRecentlyDeleted;
    unsigned long long  _joinOperator;
    NSString * _primaryDateSummary;
    NSString * _secondaryDateSummary;
}

@property (nonatomic, readonly) NSArray *emptyFilterTypeSelections;
@property (nonatomic, readonly) NSString *emptySummary;
@property (nonatomic, readonly) NSString *emptySummaryTitle;
@property (nonatomic, retain) NSArray *filterTypeSelections;
@property (nonatomic, readonly) bool hasEmptySelection;
@property (nonatomic) bool includeRecentlyDeleted;
@property (nonatomic, readonly) NSArray *incompatibleLockedNotesFilterTypeSelections;
@property (nonatomic, readonly) NSArray *invalidFilterTypeSelectionCombinations;
@property (nonatomic, readonly) NSString *invalidSummary;
@property (nonatomic, readonly) NSString *invalidSummaryTitle;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic) unsigned long long joinOperator;
@property (nonatomic, readonly, copy) NSString *primaryDateSummary;
@property (nonatomic, readonly, copy) NSString *secondaryDateSummary;
@property (nonatomic, readonly, copy) NSString *summaryWithJoinOperatorMenu;

+ (id)cloudSpecificFilterTypes;
+ (id)keyPathsForValuesAffectingHasEmptySelection;
+ (id)keyPathsForValuesAffectingIsEmpty;
+ (id)keyPathsForValuesAffectingIsValid;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)emptyFilterTypeSelections;
- (id)emptySummary;
- (id)emptySummaryTitle;
- (id)filterTypeSelectionForFilterType:(long long)arg1;
- (id)filterTypeSelections;
- (bool)hasEmptySelection;
- (unsigned long long)hash;
- (bool)includeRecentlyDeleted;
- (id)incompatibleLockedNotesFilterTypeSelections;
- (id)init;
- (id)initWithFilterTypeSelection:(id)arg1;
- (id)initWithFilterTypeSelections:(id)arg1 joinOperator:(unsigned long long)arg2;
- (id)invalidFilterTypeSelectionCombinations;
- (id)invalidSummary;
- (id)invalidSummaryTitle;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToICFilterSelection:(id)arg1;
- (bool)isValid;
- (unsigned long long)joinOperator;
- (id)primaryDateSummary;
- (id)secondaryDateSummary;
- (void)setFilterTypeSelections:(id)arg1;
- (void)setIncludeRecentlyDeleted:(bool)arg1;
- (void)setJoinOperator:(unsigned long long)arg1;
- (void)setSelection:(id)arg1 forFilterType:(long long)arg2;
- (id)summaryWithJoinOperatorMenu;

@end
