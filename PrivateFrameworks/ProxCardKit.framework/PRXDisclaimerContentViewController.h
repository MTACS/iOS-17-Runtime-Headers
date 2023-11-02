
@interface PRXDisclaimerContentViewController : PRXCardContentViewController {
    NSString * _disclaimer;
    PRXAction * _moreInfoAction;
}

@property (nonatomic, readonly) PRXDisclaimerContentView *contentView;
@property (nonatomic, copy) NSString *disclaimer;
@property (nonatomic, retain) PRXAction *moreInfoAction;

+ (Class)contentViewClass;

- (void).cxx_destruct;
- (void)_updateDisclaimerLabel;
- (void)_updateMoreInfoButton;
- (id)disclaimer;
- (id)moreInfoAction;
- (void)setDisclaimer:(id)arg1;
- (void)setMoreInfoAction:(id)arg1;
- (void)viewDidLoad;

@end
