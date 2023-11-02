
@interface _ATXSimpleWidgetSuggestion : NSObject <_ATXWidgetSuggesting> {
    ATXProactiveSuggestion * _mainSuggestionInLayout;
    _ATXHomeScreenStackState * _stack;
    ATXProactiveSuggestion * _suggestion;
    <ATXSuggestionDeduplicatorProtocol> * _suggestionDeduplicator;
    ATXSuggestionLayout * _suggestionLayout;
    ATXHomeScreenWidgetIdentifiable * _widget;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) ATXProactiveSuggestion *mainSuggestionInLayout;
@property (nonatomic, readonly) _ATXHomeScreenStackState *stack;
@property (nonatomic, readonly) ATXSuggestionLayout *suggestionLayout;
@property (readonly) Class superclass;
@property (nonatomic, readonly) ATXHomeScreenWidgetIdentifiable *widget;

+ (bool)_isSuggestion:(id)arg1 compatibleWithStack:(id)arg2;

- (void).cxx_destruct;
- (void)_setSuggestion:(id)arg1;
- (bool)containsIdenticalContentOfSuggestion:(id)arg1;
- (id)initWithSuggestion:(id)arg1 stack:(id)arg2 suggestionDeduplicator:(id)arg3;
- (id)initWithWidget:(id)arg1 suggestion:(id)arg2 stack:(id)arg3 suggestionDeduplicator:(id)arg4;
- (id)mainSuggestionInLayout;
- (id)stack;
- (id)suggestionLayout;
- (id)widget;

@end
