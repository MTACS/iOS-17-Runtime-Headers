
@protocol WFFileStorageServiceOperation <NSObject>

@required

- (void)cancel;
- (bool)isCancelled;

@end
