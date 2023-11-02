
@protocol _NSMutableParagraphStyleMarkdownSettings <NSObject, NSMutableCopying>

@optional

- (long long)_listIntentOrdinal;
- (NSArray *)_presentationIntents;
- (void)_setListIntentOrdinal:(long long)arg1;
- (void)_setPresentationIntents:(NSArray *)arg1;
- (NSString *)codeBlockIntentLanguageHint;
- (long long)headerLevel;
- (long long)listIntentOrdinal;
- (NSArray *)presentationIntents;
- (void)setCodeBlockIntentLanguageHint:(NSString *)arg1;
- (void)setHeaderLevel:(long long)arg1;
- (void)setListIntentOrdinal:(long long)arg1;

@end
