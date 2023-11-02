
@interface ColorBarView : UIView {
    UIColor * _color;
    bool  _hasRoundedCorners;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic) bool hasRoundedCorners;

- (void).cxx_destruct;
- (id)color;
- (bool)hasRoundedCorners;
- (void)setColor:(id)arg1;
- (void)setHasRoundedCorners:(bool)arg1;
- (void)setHasRoundedCorners:(bool)arg1 cornerRadius:(double)arg2;

@end
