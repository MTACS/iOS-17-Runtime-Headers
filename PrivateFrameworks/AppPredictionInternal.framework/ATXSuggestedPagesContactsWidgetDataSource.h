
@interface ATXSuggestedPagesContactsWidgetDataSource : NSObject <ATXSuggestedPagesWidgetDataSource> {
    ATXSuggestedPagesTunableConstants * _suggestedPagesTunableConstants;
}

- (void).cxx_destruct;
- (id)_createMediumContactsWidgetForPeople:(id)arg1 entities:(id)arg2;
- (id)_createSmallContactsWidgetForPeople:(id)arg1;
- (id)init;
- (id)provideWidgetsForPageType:(long long)arg1 environment:(id)arg2;

@end
