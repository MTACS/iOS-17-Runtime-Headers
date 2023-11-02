
@interface EDDataDetectionUtilities : NSObject

+ (void)_lexiconEnumerateEntries:(struct _LXLexicon { }*)arg1 forString:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)detectOneTimeCodeWithDataDetectors:(id)arg1;
+ (id)extractOneTimeCode:(id)arg1 withSubject:(id)arg2;
+ (bool)isRealWord:(id)arg1;
+ (id)log;

@end
