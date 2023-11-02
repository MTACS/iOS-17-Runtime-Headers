
@interface SFUnifiedBarItemArrangement : NSObject {
    NSArray * _leadingItems;
    NSArray * _trailingItems;
}

@property (nonatomic, readonly) bool allowsCenteringInlineContentView;
@property (nonatomic, readonly, copy) NSArray *leadingItems;
@property (nonatomic, readonly, copy) NSArray *trailingItems;

- (void).cxx_destruct;
- (bool)allowsCenteringInlineContentView;
- (void)enumerateAllItemsUsingBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithLeadingItems:(id)arg1 trailingItems:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)leadingItems;
- (id)trailingItems;

@end
