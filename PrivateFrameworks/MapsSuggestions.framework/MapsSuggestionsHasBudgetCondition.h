
@interface MapsSuggestionsHasBudgetCondition : MapsSuggestionsBaseCondition {
    MapsSuggestionsBudget * _budget;
}

- (void).cxx_destruct;
- (id)initWithBudget:(id)arg1;
- (bool)isTrue;

@end
