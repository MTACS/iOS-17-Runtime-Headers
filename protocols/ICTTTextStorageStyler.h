
@protocol ICTTTextStorageStyler <NSObject>

@required

- (void)guessFontSizeThresholdsForTTStylesInAttributedString:(NSAttributedString *)arg1;
- (bool)isForPrint;
- (NSDictionary *)modelForStyleAttributes:(NSDictionary *)arg1 filterAttributes:(bool)arg2;
- (NSDictionary *)modelForStyleAttributes:(NSDictionary *)arg1 filterAttributes:(bool)arg2 pasteboardAttributedString:(NSAttributedString *)arg3;
- (void)resetGuessedFontSizes;
- (void)setIsForPrint:(bool)arg1;
- (NSDictionary *)styleForModelAttributes:(NSDictionary *)arg1;
- (void)styleText:(ICTTTextStorage *)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 fixModelAttributes:(bool)arg3;

@optional

- (void)convertNSTablesToICTables:(NSMutableAttributedString *)arg1 pasteboardTypes:(NSArray *)arg2 filterPastedAttributes:(bool)arg3 isReadingSelectionFromPasteboard:(bool)arg4;
- (bool)disableAddingExtraLinesIfNeeded;
- (void)fixTextStorage:(ICTTTextStorage *)arg1 afterProcessingEditing:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 changeInLength:(long long)arg4;
- (void)setDisableAddingExtraLinesIfNeeded:(bool)arg1;
- (void)setZoomController:(ICTTZoomController *)arg1;
- (void)updateTrackingInTextStorage:(ICTTTextStorage *)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 changeInLength:(long long)arg3;
- (ICTTZoomController *)zoomController;

@end
