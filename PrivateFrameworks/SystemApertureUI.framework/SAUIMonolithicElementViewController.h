
@interface SAUIMonolithicElementViewController : SAUILayoutSpecifyingElementViewController

@property (nonatomic, readonly) <SAUIMonolithicElementViewProviding> *elementViewProvider;

- (id)elementViewProvider;
- (id)initWithMonolithicElementViewProvider:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
