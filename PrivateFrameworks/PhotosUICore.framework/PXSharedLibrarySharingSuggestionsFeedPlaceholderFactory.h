
@interface PXSharedLibrarySharingSuggestionsFeedPlaceholderFactory : NSObject <PXFeedPlaceholderFactory>

@property (nonatomic, readonly) bool supportsDynamicPlaceholderContentSize;

- (void)_handleDismissActionWithViewModel:(id)arg1;
- (void)_handleIdentifyParticipantsActionWithViewModel:(id)arg1;
- (id)createPlaceholderViewForFeedWithViewModel:(id)arg1;
- (bool)supportsDynamicPlaceholderContentSize;

@end
