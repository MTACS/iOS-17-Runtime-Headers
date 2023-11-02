
@interface SFUnifiedBarButton : SFUnifiedBarItem {
    id /* block */  _action;
    SFUnifiedBarButtonView * _buttonView;
}

@property (nonatomic, retain) NSString *accessibilityIdentifier;
@property (nonatomic, copy) id /* block */ action;
@property (nonatomic, retain) NSAttributedString *attributedTitle;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (void)_performAction;
- (id)accessibilityIdentifier;
- (id /* block */)action;
- (id)attributedTitle;
- (id)image;
- (id)initWithImage:(id)arg1 action:(id /* block */)arg2;
- (void)setAccessibilityIdentifier:(id)arg1;
- (void)setAction:(id /* block */)arg1;
- (void)setAttributedTitle:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)view;

@end
