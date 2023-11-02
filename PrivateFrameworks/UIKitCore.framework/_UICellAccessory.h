
@interface _UICellAccessory : NSObject {
    bool  _alwaysNeedsLayout;
    NSString * _identifier;
    double  _reservedLayoutWidth;
    UIView * _view;
}

@property (nonatomic, readonly) bool alwaysNeedsLayout;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) double reservedLayoutWidth;
@property (nonatomic, readonly) UIView *view;

+ (id)accessoryWithIdentifier:(id)arg1;

- (void).cxx_destruct;
- (bool)alwaysNeedsLayout;
- (id)description;
- (id)identifier;
- (id)init;
- (bool)isEqual:(id)arg1;
- (double)reservedLayoutWidth;
- (void)setIdentifier:(id)arg1;
- (void)setReservedLayoutWidth:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)view;

@end
