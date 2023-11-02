
@interface WFReportShortcutActivity : UIActivity {
    void $__lazy_storage_$_reportShortcutHostingViewController;
    void activityControler;
    void completion;
    void item;
    void reportSubmitted;
}

@property (nonatomic, readonly) bool _isDisabled;
@property (nonatomic) UIActivityViewController *activityControler;
@property (nonatomic, readonly) NSString *activityTitle;
@property (nonatomic, readonly) NSString *activityType;
@property (nonatomic, readonly) UIViewController *activityViewController;

+ (id)activityType;

- (void).cxx_destruct;
- (bool)_isDisabled;
- (id)_systemImageName;
- (id)activityControler;
- (id)activityTitle;
- (id)activityType;
- (id)activityViewController;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)init;
- (id)initWithWorkflow:(id)arg1 completion:(id /* block */)arg2;
- (void)setActivityControler:(id)arg1;

@end
