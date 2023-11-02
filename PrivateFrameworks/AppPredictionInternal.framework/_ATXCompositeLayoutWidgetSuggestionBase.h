
@interface _ATXCompositeLayoutWidgetSuggestionBase : NSObject <_ATXCompositeLayoutWidgetSuggesting> {
    ATXBlendingLayerHyperParameters * _hyperParameters;
    long long  _layoutType;
    ATXProactiveSuggestion * _mainSuggestionInLayout;
    _ATXHomeScreenStackState * _stack;
    <ATXSuggestionDeduplicatorProtocol> * _suggestionDeduplicator;
    ATXSuggestionLayout * _suggestionLayout;
    NSMutableDictionary * _suggestionsBySuggestionLayoutTypes;
    ATXHomeScreenWidgetIdentifiable * _widget;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) ATXBlendingLayerHyperParameters *hyperParameters;
@property (nonatomic, readonly) long long layoutType;
@property (nonatomic, readonly) ATXProactiveSuggestion *mainSuggestionInLayout;
@property (nonatomic, readonly) _ATXHomeScreenStackState *stack;
@property (nonatomic, readonly) <ATXSuggestionDeduplicatorProtocol> *suggestionDeduplicator;
@property (nonatomic, readonly) ATXSuggestionLayout *suggestionLayout;
@property (nonatomic, readonly) NSMutableDictionary *suggestionsBySuggestionLayoutTypes;
@property (readonly) Class superclass;
@property (nonatomic, readonly) ATXHomeScreenWidgetIdentifiable *widget;

- (void).cxx_destruct;
- (id)_existingSuggestionsInLayout;
- (bool)addSuggestion:(id)arg1 asMainSuggestion:(bool)arg2;
- (bool)addSuggestion:(id)arg1 asMainSuggestion:(bool)arg2 dryRun:(bool)arg3;
- (bool)canAddSuggestion:(id)arg1;
- (bool)containsIdenticalContentOfSuggestion:(id)arg1;
- (id)hyperParameters;
- (bool)isLayoutComplete;
- (long long)layoutType;
- (id)mainSuggestionInLayout;
- (id)stack;
- (id)suggestionDeduplicator;
- (id)suggestionLayout;
- (id)suggestionsBySuggestionLayoutTypes;
- (id)widget;

@end
