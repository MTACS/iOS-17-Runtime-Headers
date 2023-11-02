
@interface _LTTextToSpeechSanitizer : NSObject

+ (id)_regularExpression;
+ (id)_stringReplacingRedactionsInString:(id)arg1 withMarker:(id)arg2;
+ (bool)stringContainsRedaction:(id)arg1;
+ (id)stringReplacingRedactionsWithBeepMarker:(id)arg1;

@end
