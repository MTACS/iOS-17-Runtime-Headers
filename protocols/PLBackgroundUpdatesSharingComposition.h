
@protocol PLBackgroundUpdatesSharingComposition <NSObject>

@required

+ (NSPredicate *)predicateForPrivateOnlyCollectionsWithinSubset:(NSArray *)arg1;
+ (NSPredicate *)predicateForSharedOnlyCollectionsWithinSubset:(NSArray *)arg1;

- (void)setSharingComposition:(short)arg1;
- (short)sharingComposition;

@end
