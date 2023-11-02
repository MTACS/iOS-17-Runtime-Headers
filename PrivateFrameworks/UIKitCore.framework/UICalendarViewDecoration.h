
@interface UICalendarViewDecoration : NSObject <_UICalendarViewDecorationProviding> {
    _UICalendarViewDecorationItem * _decoration;
}

@property (setter=_setDecorationView:, nonatomic, retain) UIView *_decorationView;

+ (double)_referenceHeightForTraitCollection:(id)arg1;
+ (id)decorationWithColor:(id)arg1 size:(long long)arg2;
+ (id)decorationWithCustomViewProvider:(id /* block */)arg1;
+ (id)decorationWithImage:(id)arg1;
+ (id)decorationWithImage:(id)arg1 color:(id)arg2 size:(long long)arg3;

- (void).cxx_destruct;
- (id)_decorationView;
- (id)_decorationViewForReuseView:(id)arg1;
- (id)_decorationViewReusableKey;
- (void)_setDecorationView:(id)arg1;
- (id)init;
- (id)initWithCustomViewProvider:(id /* block */)arg1;
- (id)initWithDecorationItem:(id)arg1;
- (id)initWithImage:(id)arg1 color:(id)arg2 size:(long long)arg3;

@end
