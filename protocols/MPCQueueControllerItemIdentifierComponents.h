
@protocol MPCQueueControllerItemIdentifierComponents <NSObject>

@required

- (unsigned short)behaviorFlags;
- (NSString *)contentItemID;
- (bool)isPlaceholder;
- (NSString *)itemID;
- (NSString *)sectionID;

@end
