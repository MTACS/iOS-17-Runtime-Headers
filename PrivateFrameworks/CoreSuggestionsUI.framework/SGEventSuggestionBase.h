
@interface SGEventSuggestionBase : NSObject <SGSuggestion, SGSuggestionCategory, SGSuggestionExtensions> {
    UIImage * _calendarImage;
    EKEvent * _eventKitEvent;
    SGRealtimeEvent * _realtimeEvent;
    <SGSuggestionDelegate> * _suggestionDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <SGSuggestionDelegate> *suggestionDelegate;
@property (readonly) Class superclass;

+ (id)_eventStore;
+ (id)calendarImage;
+ (void)confirm:(bool)arg1 event:(id)arg2 completion:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)dealloc;
- (id)eventKitEvent;
- (void)eventKitStoreChangedNotification:(id)arg1;
- (id)initWithRealtimeEvent:(id)arg1;
- (void)preloadPrimaryActionViewController;
- (id)primaryActionTitle;
- (id)realtimeSuggestion;
- (void)setSuggestionDelegate:(id)arg1;
- (long long)suggestionActionButtonType;
- (id)suggestionCategory;
- (long long)suggestionCategoryActionButtonType;
- (id)suggestionCategoryId;
- (id)suggestionCategoryImage;
- (id)suggestionCategoryLocalizedCountOfItems:(id)arg1;
- (id)suggestionCategorySubtitleForItems:(id)arg1;
- (id)suggestionCategoryTitle;
- (id)suggestionCategoryTitleForItems:(id)arg1;
- (id /* block */)suggestionComparator;
- (id)suggestionDelegate;
- (id)suggestionDismissAction;
- (id)suggestionImage;
- (id)suggestionPrimaryAction;
- (id)suggestionSubtitle;
- (id)suggestionTitle;
- (id)suggestionsEvent;

@end
