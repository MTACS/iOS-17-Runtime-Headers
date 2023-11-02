
@protocol FTBatchTranslationResponseDelegate <NSObject>

@optional

- (void)streamDidReceiveBatchTranslationStreamingResponse:(FTBatchTranslationStreamingResponse *)arg1;
- (void)streamFailVerifyBatchTranslationStreamingResponse:(NSError *)arg1;

@end
