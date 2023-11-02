
@protocol RBSProcessMatching <NSObject>

@required

- (bool)matchesProcess:(RBSProcessHandle *)arg1;
- (RBSProcessPredicate *)processPredicate;

@end
