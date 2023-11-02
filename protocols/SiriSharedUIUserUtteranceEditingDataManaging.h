
@protocol SiriSharedUIUserUtteranceEditingDataManaging <NSObject>

@required

- (NSAttributedString *)attributedStringAtIndex:(long long)arg1;
- (bool)isEditedTextSameAsUtterance:(NSString *)arg1;
- (long long)numberOfAlternativeUtterances;
- (AFUserUtteranceSelectionResults *)selectionResultsForAlternateTextAtIndex:(long long)arg1;
- (AFUserUtteranceSelectionResults *)selectionResultsForEditedText:(NSString *)arg1;
- (AFUserUtterance *)userUtterance;

@end
