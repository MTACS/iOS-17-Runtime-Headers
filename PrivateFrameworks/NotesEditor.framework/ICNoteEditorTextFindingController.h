
@interface ICNoteEditorTextFindingController : NSObject

+ (bool)isWholeWordInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inString:(id)arg2;
+ (id)textFindingQueue;
+ (id)textFindingResultsForPattern:(id)arg1 textStorage:(id)arg2 ignoreCase:(bool)arg3 wholeWords:(bool)arg4;

@end
