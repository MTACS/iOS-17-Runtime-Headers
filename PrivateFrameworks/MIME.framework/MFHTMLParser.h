
@interface MFHTMLParser : NSObject

+ (id)plainTextFromHTML:(id)arg1;
+ (id)plainTextFromHTML:(id)arg1 limit:(unsigned long long)arg2;
+ (id)plainTextFromHTML:(id)arg1 limit:(unsigned long long)arg2 preserveNewlines:(bool)arg3;
+ (id)plainTextFromHTMLSnippet:(id)arg1;

@end
