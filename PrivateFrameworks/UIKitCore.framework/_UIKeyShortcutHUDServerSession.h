
@interface _UIKeyShortcutHUDServerSession : NSObject {
    _UIOServiceConnection * _connection;
    UIWindow * _keyWindow;
}

@property (nonatomic) _UIOServiceConnection *connection;
@property (nonatomic) UIWindow *keyWindow;

- (void).cxx_destruct;
- (id)connection;
- (id)keyWindow;
- (void)setConnection:(id)arg1;
- (void)setKeyWindow:(id)arg1;

@end
