
@protocol CSResetRestoreStatusProviding <NSObject>

@required

- (bool)isResetting;
- (bool)isRestoring;
- (long long)resetState;
- (long long)restoreState;

@end
