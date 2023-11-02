
@interface DBSmartWidgetView : UIView <DBSmartWidgetPredictionObserver> {
    DBSmartWidgetEngine * _engine;
    UIImageView * _imageview;
    UILabel * _nextRefreshDebugLabel;
    DBSmartWidgetPrediction * _prediction;
    UILabel * _scoreDebugLabel;
    UILabel * _subTitleLabel;
    UILabel * _titleLabel;
    UILabel * _validRangesDebugLabel;
}

@property (nonatomic) DBSmartWidgetEngine *engine;
@property (nonatomic, retain) UIImageView *imageview;
@property (nonatomic, retain) UILabel *nextRefreshDebugLabel;
@property (nonatomic, retain) DBSmartWidgetPrediction *prediction;
@property (nonatomic, retain) UILabel *scoreDebugLabel;
@property (nonatomic, retain) UILabel *subTitleLabel;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) UILabel *validRangesDebugLabel;

- (void).cxx_destruct;
- (void)_updateImageBorder;
- (void)_updateViews;
- (void)didMoveToWindow;
- (id)engine;
- (id)imageview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)nextRefreshDebugLabel;
- (id)prediction;
- (void)predictionDidUpdate:(id)arg1;
- (id)scoreDebugLabel;
- (void)setEngine:(id)arg1;
- (void)setImageview:(id)arg1;
- (void)setNextRefreshDebugLabel:(id)arg1;
- (void)setPrediction:(id)arg1;
- (void)setScoreDebugLabel:(id)arg1;
- (void)setSubTitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setValidRangesDebugLabel:(id)arg1;
- (id)subTitleLabel;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (id)validRangesDebugLabel;

@end
