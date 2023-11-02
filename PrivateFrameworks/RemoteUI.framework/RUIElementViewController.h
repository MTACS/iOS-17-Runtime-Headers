
@interface RUIElementViewController : UIViewController {
    <RUITopLevelPageElement> * _element;
}

@property (nonatomic, readonly) <RUITopLevelPageElement> *element;

- (void).cxx_destruct;
- (void)_setUpViews;
- (id)element;
- (id)initWithElement:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
