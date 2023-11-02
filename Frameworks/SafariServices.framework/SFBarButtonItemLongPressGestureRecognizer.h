
@interface SFBarButtonItemLongPressGestureRecognizer : UILongPressGestureRecognizer <UIGestureRecognizerDelegate> {
    UIBarButtonItem * _barButtonItem;
    SEL  _longPressAction;
    id  _target;
    SEL  _touchDownAction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)gestureRecognizerTarget:(id)arg1 longPressAction:(SEL)arg2 touchDownAction:(SEL)arg3 attachedToBarButtonItem:(id)arg4;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_invokeLongPressAction;
- (void)_updateMinimumPressDurationForContentSizeCategory:(id)arg1;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)longPress:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end
