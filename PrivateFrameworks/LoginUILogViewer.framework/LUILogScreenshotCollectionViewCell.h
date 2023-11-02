
@interface LUILogScreenshotCollectionViewCell : UICollectionViewCell {
    UIButton * _clearButton;
    id /* block */  _clearButtonAction;
    UILabel * _screenshotDateLabel;
    UIImageView * _screenshotImageView;
}

@property (nonatomic, readonly) UIButton *clearButton;
@property (nonatomic, copy) id /* block */ clearButtonAction;
@property (nonatomic, readonly) UILabel *screenshotDateLabel;
@property (nonatomic, readonly) UIImageView *screenshotImageView;

- (void).cxx_destruct;
- (id)_createClearButton;
- (id)_createScreenshotDateLabel;
- (id)_createScreenshotImageView;
- (void)_setup;
- (id)clearButton;
- (id /* block */)clearButtonAction;
- (void)clearButtonTapped:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)screenshotDateLabel;
- (id)screenshotImageView;
- (void)setClearButtonAction:(id /* block */)arg1;

@end
