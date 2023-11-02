
@interface _SBStatusBarChanges : NSObject {
    NSString * _statusBarPartIdentifier;
    long long  _statusBarPartStyle;
    bool  _statusBarPartStyleChanged;
    long long  _statusBarStyle;
    bool  _statusBarStyleChanged;
}

@property (nonatomic, retain) NSString *statusBarPartIdentifier;
@property (nonatomic) long long statusBarPartStyle;
@property (nonatomic) bool statusBarPartStyleChanged;
@property (nonatomic) long long statusBarStyle;
@property (nonatomic) bool statusBarStyleChanged;

- (void).cxx_destruct;
- (void)invalidate;
- (void)setStatusBarPartIdentifier:(id)arg1;
- (void)setStatusBarPartStyle:(long long)arg1;
- (void)setStatusBarPartStyle:(long long)arg1 forPartWithIdentifier:(id)arg2;
- (void)setStatusBarPartStyleChanged:(bool)arg1;
- (void)setStatusBarStyle:(long long)arg1;
- (void)setStatusBarStyleChanged:(bool)arg1;
- (id)statusBarPartIdentifier;
- (long long)statusBarPartStyle;
- (bool)statusBarPartStyleChanged;
- (long long)statusBarStyle;
- (bool)statusBarStyleChanged;

@end
