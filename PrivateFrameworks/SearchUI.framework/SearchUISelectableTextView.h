
@interface SearchUISelectableTextView : TLKTextView {
    bool  _allowsDefine;
}

@property (nonatomic) bool allowsDefine;

- (bool)_canDefine;
- (void)_define:(id)arg1;
- (bool)allowsDefine;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)setAllowsDefine:(bool)arg1;

@end
