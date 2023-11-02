
@protocol ICLinkAcceleratorControllerDelegate

@required

- (UIView *)acceleratorHostingView;
- (void)acceleratorOriginNeedsUpdate;
- (void)didSelectNoteSuggestionWithIdentifier:(NSString *)arg1 title:(NSString *)arg2;
- (ICNAEventReporter *)eventReporter;
- (bool)languageHasSpaces;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })lastSelectedRangeForAccelerator;
- (ICNote *)note;
- (long long)writingDirection;

@optional

- (NSString *)searchString;
- (ICTTTextStorage *)textStorage;

@end
