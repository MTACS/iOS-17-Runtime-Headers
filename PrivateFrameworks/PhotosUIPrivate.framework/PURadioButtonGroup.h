
@interface PURadioButtonGroup : UIViewController {
    NSMutableArray * _buttons;
    id /* block */  _completion;
    NSMutableArray * _horizontalConstraints;
    NSArray * _images;
    <PURadioButtonGroupDelegate> * _radioButtonDelegate;
    NSMutableArray * _verticalConstraints;
}

@property (nonatomic, retain) NSMutableArray *buttons;
@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, retain) NSMutableArray *horizontalConstraints;
@property (nonatomic, retain) NSArray *images;
@property (nonatomic) <PURadioButtonGroupDelegate> *radioButtonDelegate;
@property (nonatomic, retain) NSMutableArray *verticalConstraints;

- (void).cxx_destruct;
- (void)_didSelectButton:(id)arg1;
- (id)buttons;
- (id /* block */)completion;
- (id)horizontalConstraints;
- (id)images;
- (id)initWithImages:(id)arg1 delegate:(id)arg2;
- (id)radioButtonDelegate;
- (void)setButtons:(id)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setHorizontalConstraints:(id)arg1;
- (void)setImages:(id)arg1;
- (void)setRadioButtonDelegate:(id)arg1;
- (void)setVerticalConstraints:(id)arg1;
- (void)updateViewConstraints;
- (id)verticalConstraints;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
