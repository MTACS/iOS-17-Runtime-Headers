
@interface CNContactPickerServiceErrorViewController : CNErrorViewController <CNContactPickerContentViewController> {
    UIBarButtonItem * addContactBarButtonItem;
    <CNContactPickerContentDelegate> * delegate;
    UINavigationController * navigationController;
}

@property (nonatomic, readonly) UIBarButtonItem *addContactBarButtonItem;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNContactPickerContentDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UINavigationController *navigationController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)addContactBarButtonItem;
- (id)delegate;
- (void)invalidate;
- (void)invalidateSelectionAnimated:(bool)arg1;
- (id)navigationController;
- (void)setDelegate:(id)arg1;
- (void)setupWithOptions:(id)arg1 readyBlock:(id /* block */)arg2;

@end
