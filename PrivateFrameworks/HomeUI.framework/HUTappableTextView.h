
@interface HUTappableTextView : UITextView <UIGestureRecognizerDelegate> {
    NSString * _identifier;
    UITapGestureRecognizer * _tapRecognizer;
    <HUTappableTextViewDelegate> * _tappableTextViewDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITapGestureRecognizer *tapRecognizer;
@property (nonatomic) <HUTappableTextViewDelegate> *tappableTextViewDelegate;

- (void).cxx_destruct;
- (void)_handleTap:(id)arg1;
- (void)configureTapRecognizer;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIdentifier:(id)arg1;
- (void)setTapRecognizer:(id)arg1;
- (void)setTappableTextViewDelegate:(id)arg1;
- (id)tapRecognizer;
- (id)tappableTextViewDelegate;

@end
