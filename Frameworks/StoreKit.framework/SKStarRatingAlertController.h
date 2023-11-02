
@interface SKStarRatingAlertController : UIAlertController {
    id /* block */  _completion;
    SKStarRatingControl * _ratingControl;
    UIAlertAction * _submitAction;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic) float rating;

+ (id)starRatingAlertController;

- (void).cxx_destruct;
- (void)_ratingControlChanged:(id)arg1;
- (void)_updateButtonState;
- (id /* block */)completion;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (float)rating;
- (void)setCompletion:(id /* block */)arg1;
- (void)setRating:(float)arg1;
- (void)setupActionsWithBundle:(id)arg1;

@end
