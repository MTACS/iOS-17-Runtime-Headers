
@interface SBWidgetOnboardingLayoutBuilder : NSObject {
    NSArray * _pinnedWidgets;
    NSArray * _suggestionWidgets;
}

@property (nonatomic, readonly) NSArray *pinnedWidgets;
@property (nonatomic, readonly) NSArray *suggestionWidgets;

- (void).cxx_destruct;
- (id)deduplicateInsidePinnedWidgets;
- (id)defaultCalendarWidgetIcon:(unsigned long long)arg1;
- (id)defaultFirstSuggestionWidgetIcon:(unsigned long long)arg1;
- (id)defaultLargeFirstSuggestionWidgetIcon;
- (id)defaultLargeSecondSuggestionWidgetIcon;
- (id)defaultMediumCalendarWidgetIcon;
- (id)defaultMediumFirstSuggestionWidgetIcon;
- (id)defaultMediumSecondSuggestionWidgetIcon;
- (id)defaultSecondSuggestionWidgetIcon:(unsigned long long)arg1;
- (id)defaultSmallCalendarWidgetIcon;
- (id)defaultSmallClockWidgetIcon;
- (id)defaultSmallNotesWidgetIcon;
- (id)initWithPinnedWidgets:(id)arg1 suggestionWidgets:(id)arg2;
- (bool)isCalendarWidget:(id)arg1;
- (bool)isCalendarWidgetIcon:(id)arg1;
- (bool)isClockWidget:(id)arg1;
- (bool)isFirstSuggestionActiveWidgetIcon:(id)arg1;
- (bool)isSecondSuggestionActiveWidgetIcon:(id)arg1;
- (id)migratedDefaultWidgets:(bool)arg1;
- (id)migratedFourWidgets:(id)arg1;
- (id)migratedOneLargeWidget:(id)arg1;
- (id)migratedOneMediumWidget:(id)arg1;
- (id)migratedOneSmallWidget:(id)arg1;
- (id)migratedSmallAndMediumWidget:(id)arg1;
- (id)migratedThreeWidgets:(id)arg1;
- (id)migratedTwoMediumWidgets:(id)arg1;
- (id)migratedTwoSmallWidgets:(id)arg1;
- (id)pinnedWidgets;
- (id)suggestionWidgets;

@end
