
@interface MUISearchSuggestionCategoryScope : NSObject {
    NSString * _identifier;
    NSString * _parsecScope;
    id /* block */  _predicateApplier;
    NSString * _title;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) NSString *parsecScope;
@property (nonatomic, copy) id /* block */ predicateApplier;
@property (nonatomic, copy) NSString *title;

+ (id)scopeWithTitle:(id)arg1 identifier:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)identifier;
- (id)parsecScope;
- (id /* block */)predicateApplier;
- (id)predicateForSuggestion:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setParsecScope:(id)arg1;
- (void)setPredicateApplier:(id /* block */)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
