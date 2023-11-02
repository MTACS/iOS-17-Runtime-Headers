
@protocol GKSavedGameListener <NSObject>

@optional

- (void)player:(GKPlayer *)arg1 didModifySavedGame:(GKSavedGame *)arg2;
- (void)player:(GKPlayer *)arg1 hasConflictingSavedGames:(NSArray *)arg2;

@end
