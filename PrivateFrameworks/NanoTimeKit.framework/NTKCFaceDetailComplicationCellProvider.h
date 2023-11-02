
@interface NTKCFaceDetailComplicationCellProvider : NSObject {
    <NTKComplicationPickerListProvider> * _listProvider;
    UITableView * _tableView;
}

@property (nonatomic, retain) <NTKComplicationPickerListProvider> *listProvider;
@property (nonatomic, retain) UITableView *tableView;

- (void).cxx_destruct;
- (id)cellForItem:(id)arg1 atIndexPath:(id)arg2;
- (id)initWithTableView:(id)arg1 listProvider:(id)arg2;
- (id)listProvider;
- (void)setListProvider:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)tableView;

@end
