
@interface SUUIOfferViewElement : SUUIViewElement

@property (getter=isCompactModeEnabled, nonatomic, readonly) bool compactModeEnabled;
@property (getter=isSimpleOffer, nonatomic, readonly) bool simpleOffer;

- (void)enumerateChildrenUsingBlock:(id /* block */)arg1;
- (bool)isCompactModeEnabled;
- (bool)isSimpleOffer;
- (long long)pageComponentType;

@end
