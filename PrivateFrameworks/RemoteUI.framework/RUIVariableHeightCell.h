
@interface RUIVariableHeightCell : RemoteUITableViewCell {
    long long  _detailTextAlignment;
    bool  _supportsAccessory;
}

@property (nonatomic) long long detailTextAlignment;
@property (nonatomic) bool supportsAccessory;

- (long long)detailTextAlignment;
- (double)height;
- (void)layoutSubviews;
- (void)setDetailTextAlignment:(long long)arg1;
- (void)setSupportsAccessory:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeForTextLabel:(id)arg1 width:(double)arg2;
- (bool)supportsAccessory;

@end
