
@interface PhotosUICore.SuggestLessPeopleOptionSelectionViewController : UIViewController {
    void completionHandler;
    void delegate;
    void people;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithPeople:(id)arg1 delegate:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setupOptionSelectionView;
- (void)viewDidLoad;

@end
