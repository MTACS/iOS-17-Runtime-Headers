
@interface HRERecommendationEmptyTriggerBuilderContext : NSObject <HFTriggerBuilderContextProviding> {
    NSString * actionEditorInstructionsDescription;
    bool  allowConvertToShortcut;
    bool  allowDurationEditing;
    NSString * deleteConfirmationAlertMessage;
    NSString * deleteConfirmationAlertTitle;
    NSString * deleteInstructionDescription;
    NSString * doneButtonTitle;
    bool  filtersEmptyActionSets;
    NSString * serviceActionsInstructionDescription;
    bool  showActionSetsInstructions;
    bool  showConditionTriggers;
    bool  showTriggerDeleteButton;
    bool  showTriggerEnableSwitch;
    bool  showTriggerSummary;
    HFItem * suggestionItem;
    NSString * testActionsInstructionDescription;
    NSString * triggerContextAwareTitle;
    NSSet * unsupportedTriggers;
}

@property (nonatomic, readonly, copy) NSString *actionEditorInstructionsDescription;
@property (nonatomic, readonly) bool allowConvertToShortcut;
@property (nonatomic, readonly) bool allowDurationEditing;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) NSString *deleteConfirmationAlertMessage;
@property (nonatomic, readonly, copy) NSString *deleteConfirmationAlertTitle;
@property (nonatomic, readonly, copy) NSString *deleteInstructionDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *doneButtonTitle;
@property (nonatomic, readonly) bool filtersEmptyActionSets;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *serviceActionsInstructionDescription;
@property (nonatomic, readonly) bool showActionSetsInstructions;
@property (nonatomic, readonly) bool showConditionTriggers;
@property (nonatomic, readonly) bool showTriggerDeleteButton;
@property (nonatomic, readonly) bool showTriggerEnableSwitch;
@property (nonatomic, readonly) bool showTriggerSummary;
@property (nonatomic, readonly) HFItem *suggestionItem;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *testActionsInstructionDescription;
@property (nonatomic, readonly, copy) NSString *triggerContextAwareTitle;
@property (nonatomic, readonly, copy) NSSet *unsupportedTriggers;

- (void).cxx_destruct;
- (id)actionEditorInstructionsDescription;
- (bool)allowConvertToShortcut;
- (bool)allowDurationEditing;
- (id)deleteConfirmationAlertMessage;
- (id)deleteConfirmationAlertTitle;
- (id)deleteInstructionDescription;
- (id)doneButtonTitle;
- (bool)filtersEmptyActionSets;
- (id)init;
- (id)serviceActionsInstructionDescription;
- (bool)showActionSetsInstructions;
- (bool)showConditionTriggers;
- (bool)showTriggerDeleteButton;
- (bool)showTriggerEnableSwitch;
- (bool)showTriggerSummary;
- (id)suggestionItem;
- (id)testActionsInstructionDescription;
- (id)triggerContextAwareTitle;
- (id)unsupportedTriggers;

@end
