
@protocol WBSOrderedTab <NSObject>

@required

- (NSArray *)ancestorTabIdentifiers;
- (NSString *)identifier;
- (bool)isClosing;
- (bool)isPinnedTab;
- (double)lastActivationTime;
- (bool)shouldSelectOriginatingTabWhenClosed;
- (NSString *)windowIdentifier;

@end
