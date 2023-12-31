
@interface GQHTextSpan : NSObject

+ (int)handleAttachment:(id)arg1 state:(id)arg2;
+ (int)handleAutoNumber:(id)arg1 state:(id)arg2;
+ (int)handleContainerHint:(id)arg1 state:(id)arg2;
+ (int)handlePageStart:(id)arg1 state:(id)arg2;
+ (int)handleSpan:(id)arg1 checkForTrailingBlanks:(bool)arg2 state:(id)arg3;
+ (int)handleTextBackgroundForStyle:(id)arg1 destStyle:(id)arg2 state:(id)arg3;
+ (int)handleTextList:(id)arg1 checkForTrailingBlanks:(bool)arg2 state:(id)arg3;
+ (int)handleTextListChild:(id)arg1 outputBlanks:(bool)arg2 state:(id)arg3;
+ (int)handleTextMarker:(id)arg1 outputBlanks:(bool)arg2 state:(id)arg3;
+ (int)nonWhitespaceCount:(struct __CFArray { }*)arg1;

@end
