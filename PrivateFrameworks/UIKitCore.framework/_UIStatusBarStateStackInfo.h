
@interface _UIStatusBarStateStackInfo : NSObject {
    int  _hostPID;
    double  _statusBarHeightWithoutHost;
    long long  _statusBarOrientationWithoutHost;
}

@property int hostPID;
@property double statusBarHeightWithoutHost;
@property long long statusBarOrientationWithoutHost;

- (int)hostPID;
- (void)setHostPID:(int)arg1;
- (void)setStatusBarHeightWithoutHost:(double)arg1;
- (void)setStatusBarOrientationWithoutHost:(long long)arg1;
- (double)statusBarHeightWithoutHost;
- (long long)statusBarOrientationWithoutHost;

@end
