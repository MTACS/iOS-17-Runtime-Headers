
@interface NCNotificationManagementSuggestionContentProvider : NCNotificationManagementContentProvider <NCSuggestionContentProviding> {
    NSString * _auxiliaryOptionsSummaryText;
    bool  _auxiliaryOptionsVisible;
    <NCNotificationManagementSuggestionDelegate> * _suggestionDelegate;
}

@property (nonatomic, readonly, copy) NSArray *auxiliaryOptionActions;
@property (nonatomic, copy) NSString *auxiliaryOptionsSummaryText;
@property (nonatomic, readonly, copy) UIColor *auxiliaryOptionsTextColor;
@property (nonatomic) bool auxiliaryOptionsVisible;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <NCNotificationManagementSuggestionDelegate> *suggestionDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)auxiliaryOptionsSummaryText;
- (bool)auxiliaryOptionsVisible;
- (id)initWithNotificationRequest:(id)arg1 bundleDisplayName:(id)arg2 managementDelegate:(id)arg3 suggestionDelegate:(id)arg4;
- (void)setAuxiliaryOptionsSummaryText:(id)arg1;
- (void)setAuxiliaryOptionsVisible:(bool)arg1;
- (void)setSuggestionDelegate:(id)arg1;
- (id)suggestionDelegate;

@end
