
@interface ICMarkupNavigationController : UINavigationController {
    <ICMarkupDismissalDelegate> * markupDelegate;
}

@property (nonatomic) <ICMarkupDismissalDelegate> *markupDelegate;

- (void).cxx_destruct;
- (id)markupDelegate;
- (void)setMarkupDelegate:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
