
@interface PXAlert : NSObject {
    UIAlertController * _alertController;
    PXAlertConfiguration * _configuration;
    bool  _didLoad;
}

@property (nonatomic, readonly) UIAlertController *alertController;
@property (nonatomic, readonly) PXAlertConfiguration *configuration;

+ (id)show:(id /* block */)arg1;
+ (id)showForError:(id)arg1;
+ (id)showWithConfiguration:(id)arg1;

- (void).cxx_destruct;
- (void)_loadIfNeeded;
- (void)_present;
- (id)alertController;
- (id)configuration;
- (void)dismissWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (id)initWithConfiguration:(id)arg1;

@end
