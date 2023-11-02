
@protocol UIStateRestoring <NSObject>

@optional

- (void)applicationFinishedRestoringState;
- (void)decodeRestorableStateWithCoder:(NSCoder *)arg1;
- (void)encodeRestorableStateWithCoder:(NSCoder *)arg1;
- (Class)objectRestorationClass;
- (<UIStateRestoring> *)restorationParent;

@end
