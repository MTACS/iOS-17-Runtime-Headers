
@interface WFAutomationNotificationListContentView : UIView <UITableViewDataSource, UITableViewDelegate> {
    UITableView * _tableView;
    NSArray * _triggerDisplayInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITableView *tableView;
@property (nonatomic, retain) NSArray *triggerDisplayInfo;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredSize;
- (void)setTriggerDisplayInfo:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)triggerDisplayInfo;
- (void)updateUIFromNotificationUserInfo:(id)arg1;

@end
