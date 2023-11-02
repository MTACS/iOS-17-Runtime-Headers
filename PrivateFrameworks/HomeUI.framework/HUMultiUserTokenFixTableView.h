
@interface HUMultiUserTokenFixTableView : UITableView <UITableViewDataSource, UITableViewDelegate> {
    HMHome * _home;
    ACAccount * _mediaAccount;
    <HUMediaAccountDelegate> * _mediaAccountDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic, retain) ACAccount *mediaAccount;
@property (nonatomic) <HUMediaAccountDelegate> *mediaAccountDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_buttonTitleTextFont;
- (double)_buttonTitleTextHeight;
- (id)_descriptionFont;
- (double)_descriptionHeight;
- (double)_maxTitleAndDescriptionCellHeightForWidth:(double)arg1;
- (id)_titleFont;
- (double)_titleHeight;
- (id)home;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 mediaAccount:(id)arg2 home:(id)arg3 delegate:(id)arg4;
- (id)mediaAccount;
- (id)mediaAccountDelegate;
- (void)setHome:(id)arg1;
- (void)setMediaAccount:(id)arg1;
- (void)setMediaAccountDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableViewHeightForWidth:(double)arg1;

@end
