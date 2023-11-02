
@interface ATXHomeScreenStackSuggestion : NSObject {
    bool  _isLowConfidenceStackRotationForStaleStack;
    NSString * _stackId;
    NSSet * _suggestedWidgets;
    ATXHomeScreenWidgetIdentifiable * _topWidget;
    NSArray * _topWidgetSuggestions;
}

@property (nonatomic, readonly) bool isLowConfidenceStackRotationForStaleStack;
@property (nonatomic, readonly) bool isTopWidgetSuggestionsWidget;
@property (nonatomic, readonly) NSString *stackId;
@property (nonatomic, readonly) NSSet *suggestedWidgets;
@property (nonatomic, readonly) ATXHomeScreenWidgetIdentifiable *topWidget;
@property (nonatomic, readonly) ATXInfoSuggestion *topWidgetInfoSuggestion;
@property (nonatomic, readonly) ATXProactiveSuggestion *topWidgetProactiveSuggestion;

+ (unsigned long long)_stackLayoutSizeFromUILayoutType:(long long)arg1;
+ (id)_widgetAndSuggestionsFromSuggestionLayout:(id)arg1;
+ (id)_widgetProactiveSuggestionFromLayout:(id)arg1;
+ (id)_widgetsFromSuggestionLayouts:(id)arg1;
+ (id)stackSuggestionsFromCachedSuggestions:(id)arg1;
+ (id)widgetFromSuggestionLayout:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initForDebuggingWithStackIdentifier:(id)arg1 topWidget:(id)arg2 suggestedWidgets:(id)arg3;
- (id)initWithStackIdentifier:(id)arg1 layoutOfTopWidget:(id)arg2 layoutOfSuggestedWidgets:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isLowConfidenceStackRotationForStaleStack;
- (bool)isTopWidgetSuggestionsWidget;
- (id)stackId;
- (id)suggestedWidgets;
- (id)topWidget;
- (id)topWidgetInfoSuggestion;
- (id)topWidgetProactiveSuggestion;

@end
