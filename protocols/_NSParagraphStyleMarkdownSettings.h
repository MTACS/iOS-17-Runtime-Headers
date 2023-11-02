
@protocol _NSParagraphStyleMarkdownSettings <NSObject, NSMutableCopying>

@optional

- (long long)_listIntentOrdinal;
- (NSArray *)_presentationIntents;
- (NSString *)codeBlockIntentLanguageHint;
- (long long)headerLevel;
- (long long)listIntentOrdinal;
- (NSArray *)presentationIntents;

@end
