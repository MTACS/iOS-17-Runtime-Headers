
@interface _UICalendarViewDecorationItem : NSObject <_UICalendarViewDecorationProviding> {
    UIView * _decorationView;
}

@property (setter=_setDecorationView:, nonatomic, retain) UIView *_decorationView;

- (void).cxx_destruct;
- (id)_decorationView;
- (id)_decorationViewForReuseView:(id)arg1;
- (id)_decorationViewReusableKey;
- (void)_setDecorationView:(id)arg1;

@end
