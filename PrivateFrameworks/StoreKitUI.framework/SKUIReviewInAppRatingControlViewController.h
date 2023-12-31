
@interface SKUIReviewInAppRatingControlViewController : UIViewController {
    SKUIStarRatingControl * _ratingControl;
}

@property (nonatomic, retain) SKUIStarRatingControl *ratingControl;

- (void).cxx_destruct;
- (id)_repeatedTemplateImageForImage:(id)arg1;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (id)ratingControl;
- (void)setRatingControl:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
