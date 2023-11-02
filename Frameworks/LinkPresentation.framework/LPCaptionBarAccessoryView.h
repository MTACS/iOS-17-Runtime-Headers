
@interface LPCaptionBarAccessoryView : LPComponentView {
    UIImageView * _accessoryView;
    UIColor * _color;
    long long  _type;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

- (void).cxx_destruct;
- (id)_createImageViewWithImage:(id)arg1;
- (id)ensureAccessoryView;
- (id)initWithHost:(id)arg1;
- (id)initWithHost:(id)arg1 type:(long long)arg2 side:(long long)arg3;
- (void)layoutComponentView;
- (struct CGSize { double x1; double x2; })size;

@end
