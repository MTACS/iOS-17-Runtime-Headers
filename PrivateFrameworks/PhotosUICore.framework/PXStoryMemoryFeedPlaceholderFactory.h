
@interface PXStoryMemoryFeedPlaceholderFactory : NSObject <PXFeedPlaceholderFactory>

@property (nonatomic, readonly) bool supportsDynamicPlaceholderContentSize;

- (id)createPlaceholderViewForFeedWithViewModel:(id)arg1;
- (bool)supportsDynamicPlaceholderContentSize;

@end
