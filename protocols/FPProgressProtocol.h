
@protocol FPProgressProtocol <NSObject>

@required

- (void)reportProgressUpdate:(long long)arg1 totalUnitCount:(long long)arg2 completedFileCount:(long long)arg3 totalFileCount:(long long)arg4;

@end
