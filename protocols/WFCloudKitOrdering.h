
@protocol WFCloudKitOrdering <WFCloudKitItem>

@required

+ (NSString *)recordBasename;

- (NSString *)collectionIdentifier;
- (NSOrderedSet *)orderedFolderIDs;
- (NSOrderedSet *)orderedWorkflowIDs;

@end
