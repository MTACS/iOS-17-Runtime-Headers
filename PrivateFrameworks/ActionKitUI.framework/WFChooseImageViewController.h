
@interface WFChooseImageViewController : UITableViewController <WFImageContentItemCellDelegate> {
    WFContentCollection * _collection;
    <WFChooseImageViewControllerDelegate> * _delegate;
    long long  _itemsPerRow;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastFrame;
    unsigned long long  _maximumNumberOfItems;
    unsigned long long  _minimumNumberOfItems;
    NSMutableSet * _selectedItems;
}

@property (nonatomic, readonly) WFContentCollection *collection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFChooseImageViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long itemsPerRow;
@property (nonatomic) unsigned long long maximumNumberOfItems;
@property (nonatomic) unsigned long long minimumNumberOfItems;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (void)cell:(id)arg1 didSelectImageViewAtIndex:(unsigned long long)arg2;
- (id)collection;
- (id)delegate;
- (void)done;
- (id)initWithCollection:(id)arg1 selectedIndexes:(id)arg2;
- (long long)itemsPerRow;
- (unsigned long long)maximumNumberOfItems;
- (unsigned long long)minimumNumberOfItems;
- (void)setDelegate:(id)arg1;
- (void)setItemsPerRow:(long long)arg1;
- (void)setMaximumNumberOfItems:(unsigned long long)arg1;
- (void)setMinimumNumberOfItems:(unsigned long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
