
@interface PUAssetPickerActivityProgressController : NSObject {
    UIAlertController * _alertController;
    id /* block */  _cancellationHandler;
    NSString * _message;
    NSProgress * _progress;
    PUAssetPickerActivityProgressViewController * _progressViewController;
    NSString * _title;
}

@property (nonatomic, copy) id /* block */ cancellationHandler;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, retain) NSProgress *progress;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (void)_setupAlertController;
- (id /* block */)cancellationHandler;
- (void)hideWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)message;
- (id)progress;
- (void)setCancellationHandler:(id /* block */)arg1;
- (void)setMessage:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)showFromSourceViewController:(id)arg1 completion:(id /* block */)arg2;
- (id)title;

@end
