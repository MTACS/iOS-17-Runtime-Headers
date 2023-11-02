
@protocol _UINavigationBarTitleRenamerDelegate <NSObject>

@required

- (void)titleRenamer:(_UINavigationBarTitleRenamer *)arg1 didCancelSession:(_UINavigationBarTitleRenamerSession *)arg2;
- (void)titleRenamer:(_UINavigationBarTitleRenamer *)arg1 session:(_UINavigationBarTitleRenamerSession *)arg2 didEndRenamingWithTitle:(NSString *)arg3;
- (void)titleRenamer:(_UINavigationBarTitleRenamer *)arg1 session:(_UINavigationBarTitleRenamerSession *)arg2 fileRenameDidEnd:(NSURL *)arg3;
- (void)titleRenamer:(_UINavigationBarTitleRenamer *)arg1 session:(_UINavigationBarTitleRenamerSession *)arg2 fileRenameDidFail:(NSError *)arg3;
- (bool)titleRenamer:(_UINavigationBarTitleRenamer *)arg1 session:(_UINavigationBarTitleRenamerSession *)arg2 shouldEndRenamingWithTitle:(NSString *)arg3;
- (NSString *)titleRenamer:(_UINavigationBarTitleRenamer *)arg1 session:(_UINavigationBarTitleRenamerSession *)arg2 willBeginRenamingWithTitle:(NSString *)arg3 selectedRange:(inout struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg4;

@end
