
@interface SFUnifiedTabBarItemAccessoryButtonArrangement : NSObject {
    NSArray * _leadingButtonTypes;
    NSArray * _trailingButtonTypes;
}

@property (nonatomic, readonly, copy) NSArray *leadingButtonTypes;
@property (nonatomic, readonly, copy) NSArray *trailingButtonTypes;

- (void).cxx_destruct;
- (bool)containsButtonType:(long long)arg1;
- (id)init;
- (id)initUsingButtonLayout:(long long)arg1 filteringButtonsUsingBlock:(id /* block */)arg2;
- (id)initWithLeadingButtonTypes:(id)arg1 trailingButtonTypes:(id)arg2;
- (bool)isEqualToArrangement:(id)arg1;
- (id)leadingButtonTypes;
- (id)trailingButtonTypes;

@end
