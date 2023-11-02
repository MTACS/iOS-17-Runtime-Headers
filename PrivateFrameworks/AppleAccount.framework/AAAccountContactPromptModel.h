
@interface AAAccountContactPromptModel : NSObject {
    AALocalContactInfo * _contact;
    bool  _destructiveActionRequiresAuth;
    NSString * _destructiveActionSheetCancelText;
    NSString * _destructiveActionSheetDetails;
    NSString * _destructiveActionSheetTitle;
    NSString * _destructiveActionText;
    NSString * _detailsLabel;
    NSString * _detailsSubtitle;
    NSString * _doneButtonTitle;
    bool  _primaryActionRequiresAuth;
    NSString * _primaryActionText;
    NSString * _secondaryActionText;
    NSString * _title;
}

@property (nonatomic, retain) AALocalContactInfo *contact;
@property (nonatomic) bool destructiveActionRequiresAuth;
@property (nonatomic, copy) NSString *destructiveActionSheetCancelText;
@property (nonatomic, copy) NSString *destructiveActionSheetDetails;
@property (nonatomic, copy) NSString *destructiveActionSheetTitle;
@property (nonatomic, copy) NSString *destructiveActionText;
@property (nonatomic, copy) NSString *detailsLabel;
@property (nonatomic, copy) NSString *detailsSubtitle;
@property (nonatomic, copy) NSString *doneButtonTitle;
@property (nonatomic) bool primaryActionRequiresAuth;
@property (nonatomic, copy) NSString *primaryActionText;
@property (nonatomic, copy) NSString *secondaryActionText;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)contact;
- (bool)destructiveActionRequiresAuth;
- (id)destructiveActionSheetCancelText;
- (id)destructiveActionSheetDetails;
- (id)destructiveActionSheetTitle;
- (id)destructiveActionText;
- (id)detailsLabel;
- (id)detailsSubtitle;
- (id)doneButtonTitle;
- (id)init;
- (bool)primaryActionRequiresAuth;
- (id)primaryActionText;
- (id)secondaryActionText;
- (void)setContact:(id)arg1;
- (void)setDestructiveActionRequiresAuth:(bool)arg1;
- (void)setDestructiveActionSheetCancelText:(id)arg1;
- (void)setDestructiveActionSheetDetails:(id)arg1;
- (void)setDestructiveActionSheetTitle:(id)arg1;
- (void)setDestructiveActionText:(id)arg1;
- (void)setDetailsLabel:(id)arg1;
- (void)setDetailsSubtitle:(id)arg1;
- (void)setDoneButtonTitle:(id)arg1;
- (void)setPrimaryActionRequiresAuth:(bool)arg1;
- (void)setPrimaryActionText:(id)arg1;
- (void)setSecondaryActionText:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
