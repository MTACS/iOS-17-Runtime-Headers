
@protocol BUFileCopier <NSObject>

@required

- (bool)copyToURL:(NSURL *)arg1 error:(id*)arg2;
- (bool)countTotalFileSize:(unsigned long long*)arg1 totalFileCount:(unsigned long long*)arg2;
- (<BUFileCopierDelegate> *)delegate;
- (void)setDelegate:(id <BUFileCopierDelegate>)arg1;

@end
