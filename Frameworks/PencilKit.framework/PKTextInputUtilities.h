
@interface PKTextInputUtilities : NSObject

+ (id)_notesTextViewFromResponder:(id)arg1;
+ (bool)isResponderSupportedTextInput:(id)arg1;
+ (bool)isResponderSupportedTextInput:(id)arg1 checkForNotes:(bool)arg2 outTextInputTraits:(id*)arg3;
+ (bool)isResponderSupportedTextInput:(id)arg1 outTextInputTraits:(id*)arg2;
+ (void)markAnalyticsForDeletionCount:(unsigned long long)arg1 rangeToReplace:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (void)markAnalyticsForInsertionWithTexts:(id)arg1 rangeToReplace:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (void)markAnalyticsForInsertionWithTexts:(id)arg1 rangeToReplace:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 withAlternatives:(long long)arg3;
+ (void)markAnalyticsForRedo;
+ (void)markAnalyticsForSelectionChange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 relativeRangeBefore:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (void)markAnalyticsForUndo;
+ (id)nonEditableTextInputForView:(id)arg1;
+ (long long)responderTextInputSource:(id)arg1;
+ (bool)shouldAvoidNonEditableView:(id)arg1;
+ (bool)textInputTraitsAreSecure:(id)arg1;
+ (id)textInputTraitsFromTextInput:(id)arg1;

@end
