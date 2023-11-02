
@interface UIPrintOptionListCell : UIPrintOptionCell <UIPopoverPresentationControllerDelegate> {
    <UIPrintOptionListDelegate> * _itemListDelegate;
    UIPrintOptionListViewController * _printOptionListViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <UIPrintOptionListDelegate> *itemListDelegate;
@property (nonatomic, retain) UIPrintOptionListViewController *printOptionListViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)itemListDelegate;
- (void)prepareForReuse;
- (void)printOptionCellTapped;
- (id)printOptionListViewController;
- (void)setItemListDelegate:(id)arg1;
- (void)setPrintOptionListViewController:(id)arg1;

@end
