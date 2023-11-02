
@interface RowSeparatorView : UIView {
    bool  _vibrant;
}

@property (nonatomic) bool vibrant;

- (void)setVibrant:(bool)arg1;
- (void)tintColorDidChange;
- (bool)vibrant;

@end
