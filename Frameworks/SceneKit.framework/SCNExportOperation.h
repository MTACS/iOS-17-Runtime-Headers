
@interface SCNExportOperation : NSOperation

- (bool)canceled;
- (id)error;
- (double)progress;
- (bool)succeded;

@end
