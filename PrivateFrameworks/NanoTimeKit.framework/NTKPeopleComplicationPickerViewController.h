
@interface NTKPeopleComplicationPickerViewController : UIViewController <UITableViewDelegate> {
    NTKComplicationPickerDetailViewConfiguration * _configuration;
    NTKPeopleDetailComplicationPickerDataSource * _dataSource;
    <NTKPeopleComplicationPickerViewControllerDelegate> * _delegate;
    bool  _isFirstTimeVisible;
    NSString * _parentSectionName;
    UITableView * _tableView;
}

@property (nonatomic, retain) NTKComplicationPickerDetailViewConfiguration *configuration;
@property (nonatomic, retain) NTKPeopleDetailComplicationPickerDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NTKPeopleComplicationPickerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isFirstTimeVisible;
@property (nonatomic, retain) NSString *parentSectionName;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;

- (void).cxx_destruct;
- (void)_didSelectItemAtIndexPath:(id)arg1;
- (id)configuration;
- (id)dataSource;
- (id)delegate;
- (id)initWithDetailConfiguration:(id)arg1;
- (bool)isFirstTimeVisible;
- (id)parentSectionName;
- (void)scrollToSelectedIdentifierAnimated:(bool)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsFirstTimeVisible:(bool)arg1;
- (void)setParentSectionName:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)tableView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
