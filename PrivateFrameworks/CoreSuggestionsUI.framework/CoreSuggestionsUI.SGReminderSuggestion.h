
@interface CoreSuggestionsUI.SGReminderSuggestion : NSObject <REMReminderCreationDelegate, SGSuggestion, SGSuggestionCategory, SGSuggestionExtensions> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void reminder;
    void reminderNotes;
    void suggestionDelegate;
}

@property (nonatomic, readonly) NSDateComponents *dueDateComponents;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) long long locationProximity;
@property (nonatomic, readonly) NSString *locationString;
@property (nonatomic, readonly) NSAttributedString *notes;
@property (nonatomic) <SGSuggestionDelegate> *suggestionDelegate;
@property (nonatomic, readonly) NSAttributedString *title;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSUserActivity *userActivity;
@property (nonatomic, readonly) bool wantsExtendedDetailOnlyView;

- (void).cxx_destruct;
- (void)dismissViewController:(id)arg1 finished:(bool)arg2;
- (id)dueDateComponents;
- (id)init;
- (id)initWithRealtimeReminder:(id)arg1;
- (id)location;
- (long long)locationProximity;
- (id)locationString;
- (id)notes;
- (id)realtimeSuggestion;
- (void)reminderCreationViewController:(id)arg1 didCreateReminder:(bool)arg2 error:(id)arg3;
- (void)setSuggestionDelegate:(id)arg1;
- (long long)suggestionActionButtonType;
- (id)suggestionAttributedSubtitle;
- (id)suggestionCategory;
- (long long)suggestionCategoryActionButtonType;
- (id)suggestionCategoryId;
- (id)suggestionCategoryImage;
- (id)suggestionCategoryLocalizedCountOfItems:(id)arg1;
- (id)suggestionCategorySubtitleForItems:(id)arg1;
- (id)suggestionCategoryTitle;
- (id)suggestionCategoryTitleForItems:(id)arg1;
- (id)suggestionDelegate;
- (id)suggestionDismissAction;
- (id)suggestionImage;
- (id)suggestionPrimaryAction;
- (id)suggestionSubtitle;
- (id)suggestionTitle;
- (id)title;
- (id)url;
- (id)userActivity;
- (bool)wantsExtendedDetailOnlyView;

@end
