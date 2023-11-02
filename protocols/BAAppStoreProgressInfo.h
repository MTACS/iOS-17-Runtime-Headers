
@protocol BAAppStoreProgressInfo <NSObject>

@required

- (long long)countOfBytesExpectedToReceive;
- (long long)countOfBytesReceived;
- (long long)progressState;

@end
