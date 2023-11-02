
@interface DBLockOutViewController : UIViewController <DBLockOutViewDelegate> {
    <DBLockOutViewControllerDelegate> * _delegate;
    DBEnvironmentConfiguration * _environmentConfiguration;
    long long  _lockOutMode;
    DBLockOutView * _lockOutView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DBLockOutViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) DBEnvironmentConfiguration *environmentConfiguration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long lockOutMode;
@property (nonatomic, retain) DBLockOutView *lockOutView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_newLockOutViewForMode:(long long)arg1;
- (id)delegate;
- (id)environmentConfiguration;
- (id)initWithEnvironmentConfiguration:(id)arg1;
- (long long)lockOutMode;
- (id)lockOutView;
- (void)lockOutView:(id)arg1 didTapButtonOfType:(unsigned long long)arg2;
- (id)preferredFocusEnvironments;
- (void)setDelegate:(id)arg1;
- (void)setEnvironmentConfiguration:(id)arg1;
- (void)setLockOutMode:(long long)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setLockOutView:(id)arg1;

@end
