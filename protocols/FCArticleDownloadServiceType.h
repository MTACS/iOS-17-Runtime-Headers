
@protocol FCArticleDownloadServiceType

@required

- (<FCOperationCanceling> *)downloadArticleWithID:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 10: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FCInterestToken *, unsigned long long, bool, NSError *, void*
- (<FCOperationCanceling> *)fetchCachedArticleWithID:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 10: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FCInterestToken *, unsigned long long, bool, NSError *, void*
- (bool)isArticleDownloadedEnoughToRead:(NSString *)arg1;

@end
