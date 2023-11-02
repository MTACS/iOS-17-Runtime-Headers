
@interface AAUITableViewDecorator : NSObject <AAUITableViewDecoratorProtocol, UITableViewDataSource, UITableViewDelegate> {
    <UITableViewDataSource> * _dataSource;
    <UITableViewDelegate> * _delegate;
    <AAUITableViewDecoratorProtocol> * _tableView;
}

@property (nonatomic) <UITableViewDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UITableViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) <AAUITableViewDecoratorProtocol> *tableView;

- (void).cxx_destruct;
- (id)dataSource;
- (id)delegate;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithTableView:(id)arg1;
- (void)reloadData;
- (void)reloadRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

@end
