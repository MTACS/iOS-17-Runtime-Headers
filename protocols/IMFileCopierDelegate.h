
@protocol IMFileCopierDelegate

@required

- (void)fileCopierDidFinish:(IMFileCopier *)arg1;
- (void)fileCopierDidStart:(IMFileCopier *)arg1;

@end
