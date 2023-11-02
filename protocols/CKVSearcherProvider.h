
@protocol CKVSearcherProvider

@required

- (CKVocabularySearcher *)makeSearcherForUserId:(NSString *)arg1 prewarm:(bool)arg2;

@end
