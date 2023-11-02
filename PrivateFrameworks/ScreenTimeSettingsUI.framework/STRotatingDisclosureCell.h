
@interface STRotatingDisclosureCell : PSTableCell <UIGestureRecognizerDelegate> {
    UILongPressGestureRecognizer * _longPressGestureRecognizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_userPressed:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)longPressGestureRecognizer;
- (void)setSpecifier:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end
