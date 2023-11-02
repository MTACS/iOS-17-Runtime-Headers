
@interface _GroupActivities_UIKit.GroupActivitySharingController : UIViewController {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _resultValue;
    void activity;
    void controller;
}

@property (nonatomic) long long modalPresentationStyle;
@property (nonatomic, copy) NSString *shareSheetSessionID;
@property (nonatomic) bool startStagedActivity;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemProvider:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (long long)modalPresentationStyle;
- (void)registerWithResultHandler:(id /* block */)arg1;
- (void)setModalPresentationStyle:(long long)arg1;
- (void)setShareSheetSessionID:(id)arg1;
- (void)setStartStagedActivity:(bool)arg1;
- (id)shareSheetSessionID;
- (bool)startStagedActivity;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
