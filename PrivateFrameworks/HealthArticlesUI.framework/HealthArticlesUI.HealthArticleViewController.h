
@interface HealthArticlesUI.HealthArticleViewController : UIViewController <UINavigationControllerDelegate, UIScrollViewDelegate> {
    void $__lazy_storage_$_componentViews;
    void $__lazy_storage_$_contentView;
    void $__lazy_storage_$_trackingViewToState;
    void components;
    void scrollView;
}

@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

- (void).cxx_destruct;
- (void)dismissArticleModal;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewIsAppearing:(bool)arg1;

@end
