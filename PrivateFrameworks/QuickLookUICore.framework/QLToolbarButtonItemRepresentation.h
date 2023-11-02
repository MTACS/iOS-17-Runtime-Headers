
@interface QLToolbarButtonItemRepresentation : UIBarButtonItem {
    bool  _disappearsOnTap;
    NSString * _identifier;
    UILongPressGestureRecognizer * _longPressGestureRecognizer;
    QLToolbarButton * _originalButton;
    unsigned long long  _placement;
    UIViewController<QLToolbarButtonDelegate> * _presentingViewController;
}

@property bool disappearsOnTap;
@property (retain) NSString *identifier;
@property (nonatomic, retain) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property QLToolbarButton *originalButton;
@property unsigned long long placement;
@property UIViewController<QLToolbarButtonDelegate> *presentingViewController;

- (void).cxx_destruct;
- (bool)disappearsOnTap;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (id)longPressGestureRecognizer;
- (id)originalButton;
- (unsigned long long)placement;
- (id)presentingViewController;
- (void)setDisappearsOnTap:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLongPressGestureRecognizer:(id)arg1;
- (void)setLongPressTarget:(id)arg1 action:(SEL)arg2;
- (void)setOriginalButton:(id)arg1;
- (void)setPlacement:(unsigned long long)arg1;
- (void)setPresentingViewController:(id)arg1;

@end
