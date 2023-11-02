
@interface _PKEnterCurrencyWithSuggestionsTextField : UITextField {
    <_PKEnterCurrencyWithSuggestionsTextFieldDataSource> * _suggestionsDataSource;
}

@property (nonatomic) <_PKEnterCurrencyWithSuggestionsTextFieldDataSource> *suggestionsDataSource;

- (void).cxx_destruct;
- (void)insertTextSuggestion:(id)arg1;
- (void)setInputDelegate:(id)arg1;
- (void)setSuggestionsDataSource:(id)arg1;
- (id)suggestionsDataSource;

@end
