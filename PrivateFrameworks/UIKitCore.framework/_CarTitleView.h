
@interface _CarTitleView : UIView {
    NSArray * _extraConstraints;
    bool  _largeText;
    NSString * _text;
    UIView * _view;
}

@property (nonatomic, retain) NSArray *extraConstraints;
@property (nonatomic) bool largeText;
@property (nonatomic, retain) NSString *text;
@property (nonatomic, retain) UIView *view;

- (void).cxx_destruct;
- (void)_updateLayout;
- (void)_updateText;
- (id)extraConstraints;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)largeText;
- (void)setExtraConstraints:(id)arg1;
- (void)setLargeText:(bool)arg1;
- (void)setText:(id)arg1;
- (void)setView:(id)arg1;
- (id)text;
- (id)view;

@end
