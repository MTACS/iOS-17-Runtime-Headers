
@interface TUIKey : NSObject {
    UIKBTree * _backingTree;
    NSString * _displayString;
    bool  _inGridLayout;
    UIKBTree * _keyplane;
    long long  _layoutShape;
    long long  _layoutType;
    double  _multiplier;
    long long  _style;
}

@property (nonatomic, retain) UIKBTree *backingTree;
@property (nonatomic, retain) NSString *displayString;
@property (nonatomic) bool inGridLayout;
@property (nonatomic, retain) UIKBTree *keyplane;
@property (nonatomic) long long layoutShape;
@property (nonatomic) long long layoutType;
@property (nonatomic) double multiplier;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } paddedFrame;
@property (nonatomic, readonly) NSString *representedString;
@property (nonatomic) long long style;

+ (id)keyFromKBTree:(id)arg1;
+ (id)keyFromKBTree:(id)arg1 layoutType:(long long)arg2 layoutShape:(long long)arg3 multiplier:(double)arg4;

- (void).cxx_destruct;
- (id)backingTree;
- (id)description;
- (id)displayString;
- (bool)inGridLayout;
- (id)keyplane;
- (long long)layoutShape;
- (long long)layoutType;
- (double)multiplier;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })paddedFrame;
- (id)representedString;
- (void)setBackingTree:(id)arg1;
- (void)setDisplayString:(id)arg1;
- (void)setInGridLayout:(bool)arg1;
- (void)setKeyplane:(id)arg1;
- (void)setLayoutShape:(long long)arg1;
- (void)setLayoutType:(long long)arg1;
- (void)setMultiplier:(double)arg1;
- (void)setPaddedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setStyle:(long long)arg1;
- (id)stringFromLayoutType:(long long)arg1;
- (id)stringFromShape:(long long)arg1;
- (long long)style;

@end
