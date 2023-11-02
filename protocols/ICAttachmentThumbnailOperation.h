
@protocol ICAttachmentThumbnailOperation

@required

- (void)addCompletionBlock:(void *)arg1; // needs 1 arg types, found 9: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIImage *, unsigned long long, bool, bool, void*
- (bool)isMatchingOperationForCacheKey:(NSString *)arg1 cache:(ICThumbnailDataCache *)arg2;

@end
