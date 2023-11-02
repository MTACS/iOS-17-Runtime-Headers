
@protocol HFTriggerBuilderContextProviding <NSObject>

@required

- (NSString *)actionEditorInstructionsDescription;
- (bool)allowConvertToShortcut;
- (bool)allowDurationEditing;
- (NSString *)deleteConfirmationAlertMessage;
- (NSString *)deleteConfirmationAlertTitle;
- (NSString *)deleteInstructionDescription;
- (NSString *)doneButtonTitle;
- (bool)filtersEmptyActionSets;
- (NSString *)serviceActionsInstructionDescription;
- (bool)showActionSetsInstructions;
- (bool)showConditionTriggers;
- (bool)showTriggerDeleteButton;
- (bool)showTriggerEnableSwitch;
- (bool)showTriggerSummary;
- (HFItem *)suggestionItem;
- (NSString *)testActionsInstructionDescription;
- (NSString *)triggerContextAwareTitle;
- (NSSet *)unsupportedTriggers;

@end
