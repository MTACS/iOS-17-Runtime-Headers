
@interface _ICLexiconUtilities : NSObject

+ (struct _LXEntry { }*)copyEntry:(struct _LXLexicon { }*)arg1 forString:(id)arg2;
+ (bool)lexiconContainsEntry:(struct _LXLexicon { }*)arg1 forString:(id)arg2;
+ (id)sortKeyEquivalents:(struct _LXLexicon { }*)arg1 forString:(id)arg2;

@end
