
@interface SUUIComposeReviewHeaderView : UIView <SUUIComposeTextFieldListViewDelegate> {
    <SUUIComposeReviewHeaderDelegate> * _delegate;
    SKStarRatingControl * _ratingControl;
    UIView * _ratingControlBackground;
    SUUIReviewMetadata * _review;
    long long  _style;
    SUUIComposeTextFieldListView * _textFieldListView;
}

@property (nonatomic, readonly) long long composeReviewStyle;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SUUIComposeReviewHeaderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIResponder *initialFirstResponder;
@property (nonatomic) float rating;
@property (nonatomic, retain) SUUIReviewMetadata *review;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (long long)composeReviewStyle;
- (void)dealloc;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(long long)arg2;
- (id)initialFirstResponder;
- (void)layoutSubviews;
- (long long)numberOfColumnsInTextFieldList:(id)arg1;
- (long long)numberOfFieldsInTextFieldList:(id)arg1;
- (float)rating;
- (id)review;
- (void)setDelegate:(id)arg1;
- (void)setRating:(float)arg1;
- (void)setReview:(id)arg1;
- (void)sizeToFit;
- (id)textFieldList:(id)arg1 configurationForFieldAtIndex:(unsigned long long)arg2;
- (void)textFieldListValidityDidChange:(id)arg1;
- (void)textFieldListValuesDidChange:(id)arg1;
- (id)title;

@end
