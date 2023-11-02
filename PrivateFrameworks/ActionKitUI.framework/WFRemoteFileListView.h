
@interface WFRemoteFileListView : UIView <UITableViewDataSource, UITableViewDelegate> {
    UILocalizedIndexedCollation * _collation;
    NSDateFormatter * _dateFormatter;
    <WFRemoteFileListViewDelegate> * _delegate;
    NSDictionary * _filesBySection;
    UITableView * _tableView;
}

@property (nonatomic, readonly) UILocalizedIndexedCollation *collation;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (nonatomic, readonly) NSDateFormatter *dateFormatter;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFRemoteFileListViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDictionary *filesBySection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITableView *tableView;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } verticalScrollIndicatorInsets;

- (void).cxx_destruct;
- (id)cellAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)collation;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (id)dateFormatter;
- (id)delegate;
- (id)fileAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)filesBySection;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfCellAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 collation:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setFiles:(id)arg1;
- (void)setFilesBySection:(id)arg1;
- (void)setVerticalScrollIndicatorInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)updateCheckmarkForFile:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })verticalScrollIndicatorInsets;

@end
