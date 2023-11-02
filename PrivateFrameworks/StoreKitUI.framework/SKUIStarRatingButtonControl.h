
@interface SKUIStarRatingButtonControl : UIView {
    NSMutableArray * _buttons;
    <SKUIStarRatingButtonControlDelegate> * _delegate;
    float  _value;
}

@property (nonatomic, retain) NSMutableArray *buttons;
@property (nonatomic) <SKUIStarRatingButtonControlDelegate> *delegate;
@property (nonatomic) float value;

- (void).cxx_destruct;
- (void)_starButtonTapped:(id)arg1;
- (void)_updateForButtonIdentifier:(unsigned long long)arg1;
- (id)buttons;
- (id)delegate;
- (id)init;
- (void)populate;
- (void)setButtons:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setValue:(float)arg1;
- (float)value;

@end
