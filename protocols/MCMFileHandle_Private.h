
@protocol MCMFileHandle_Private <MCMFileHandle>

@required

- (bool)expectOpenWithError:(id*)arg1;
- (int)fd;
- (void)setFd:(int)arg1;

@end
