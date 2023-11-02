
@protocol PXMutableAssetActionMenu <NSObject>

@required

- (void)addDestructiveElement:(UIMenuElement *)arg1;
- (NSArray *)excludedActionTypes;
- (void)setExcludedActionTypes:(NSArray *)arg1;

@end
