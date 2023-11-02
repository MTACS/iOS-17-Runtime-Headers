
@interface TIKBSessionTouchInfo : NSObject {
    unsigned long long  _layoutId;
    TIKeyboardTouchEvent * _touch;
}

@property (nonatomic) unsigned long long layoutId;
@property (nonatomic, retain) TIKeyboardTouchEvent *touch;

- (void).cxx_destruct;
- (unsigned long long)layoutId;
- (void)setLayoutId:(unsigned long long)arg1;
- (void)setTouch:(id)arg1;
- (id)touch;

@end
