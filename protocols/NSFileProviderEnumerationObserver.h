
@protocol NSFileProviderEnumerationObserver <NSObject>

@required

- (void)didEnumerateItems:(NSArray *)arg1;
- (void)finishEnumeratingUpToPage:(NSData *)arg1;
- (void)finishEnumeratingWithError:(NSError *)arg1;

@optional

- (long long)suggestedPageSize;

@end
