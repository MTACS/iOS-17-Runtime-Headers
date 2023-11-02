
@interface WFLinkNotesPinNotesAction : WFLinkFavoriteEntityAction

- (id)overrideDescriptionSummary;
- (id)overrideLabelsByParameter;
- (id)overrideName;
- (id)overrideParameterSummary;
- (bool)shouldOverrideParameterLabels;

@end
