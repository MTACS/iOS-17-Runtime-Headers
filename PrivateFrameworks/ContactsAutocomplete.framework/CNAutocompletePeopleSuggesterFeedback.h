
@interface CNAutocompletePeopleSuggesterFeedback : NSObject {
    NSString * _bundleIdentifier;
    _PSSuggester * _psSuggester;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) _PSSuggester *psSuggester;

+ (id)bundleIdentifier;
+ (void)didReceiveSuggestions:(id)arg1;
+ (void)provideFeedback:(id)arg1;
+ (id)sharedInstance;
+ (void)userEnteredContact:(id)arg1;
+ (void)userEnteredExistingSession;
+ (void)userEnteredNewSession;
+ (void)userNavigatedAwayFromSession;
+ (void)userRemovedContact:(id)arg1;
+ (void)userSelectedFromContactPicker:(id)arg1;
+ (void)userSelectedSuggestion:(id)arg1;
+ (void)userTerminatedSession;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)init;
- (id)psSuggester;

@end
