
@interface GKHairlineView : UIView {
    long long  _alignment;
}

@property (nonatomic) long long alignment;

+ (id)hairlineViewForAlignment:(long long)arg1;

- (long long)alignment;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setAlignment:(long long)arg1;
- (void)sizeToFit;

@end
