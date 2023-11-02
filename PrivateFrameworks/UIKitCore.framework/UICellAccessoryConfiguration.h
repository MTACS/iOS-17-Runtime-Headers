
@interface UICellAccessoryConfiguration : NSObject {
    NSArray * _leadingAccessories;
    bool  _leadingAlwaysNeedsLayout;
    NSArray * _trailingAccessories;
    bool  _trailingAlwaysNeedsLayout;
}

@property (nonatomic, copy) NSArray *leadingAccessories;
@property (nonatomic, copy) NSArray *trailingAccessories;

- (void).cxx_destruct;
- (bool)alwaysNeedsLayout;
- (id)description;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)leadingAccessories;
- (void)setLeadingAccessories:(id)arg1;
- (void)setTrailingAccessories:(id)arg1;
- (id)trailingAccessories;

@end
