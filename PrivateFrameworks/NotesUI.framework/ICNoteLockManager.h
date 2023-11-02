
@interface ICNoteLockManager : NSObject {
    ICAccount * _account;
    ICNote * _note;
    ICNote * _updatedNote;
    UIWindow * _window;
}

@property (nonatomic, readonly) ICAccount *account;
@property (nonatomic, readonly) ICNote *note;
@property (nonatomic, retain) ICNote *updatedNote;
@property (nonatomic) UIWindow *window;

- (void).cxx_destruct;
- (id)account;
- (void)addLockWithCompletionHandler:(id /* block */)arg1;
- (id)initWithNote:(id)arg1;
- (id)note;
- (void)removeLockWithCompletionHandler:(id /* block */)arg1;
- (void)setUpdatedNote:(id)arg1;
- (void)setWindow:(id)arg1;
- (void)toggleLockWithCompletionHandler:(id /* block */)arg1;
- (void)unsafelyToggleLockWithCompletionHandler:(id /* block */)arg1;
- (id)updatedNote;
- (id)window;

@end
