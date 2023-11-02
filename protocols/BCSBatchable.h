
@protocol BCSBatchable <NSObject>

@required

- (void)beginBatch;
- (void)endBatch;

@end
