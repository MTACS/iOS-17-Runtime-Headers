
@interface NMUKeepLocalAlertConfiguration : NSObject {
    NSArray * _actions;
    NMUKeepLocalAlertAction * _cancelAction;
    NSString * _message;
    NSString * _title;
}

@property (nonatomic, retain) NSArray *actions;
@property (nonatomic, retain) NMUKeepLocalAlertAction *cancelAction;
@property (nonatomic, retain) NSString *message;
@property (nonatomic, retain) NSString *title;

+ (id)requiredPropertiesForModelKind:(id)arg1;

- (void).cxx_destruct;
- (id)_cancelAction;
- (id)_downloadNowOffPowerActionWithOptions:(id)arg1;
- (id)_downloadNowOffPowerOnCellularActionWithOptions:(id)arg1;
- (id)_okAction;
- (id)actions;
- (id)alertViewControllerWithKeepLocalBlock:(id /* block */)arg1;
- (id)cancelAction;
- (id)message;
- (void)setActions:(id)arg1;
- (void)setCancelAction:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
