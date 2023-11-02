
@interface ATXSuggestedPagesWidgetAggregator : NSObject <ATXSuggestedPagesWidgetDataSource> {
    NSArray * _sources;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithSources:(id)arg1;
- (id)provideWidgetsForPageType:(long long)arg1 environment:(id)arg2;

@end
