
@interface __NSCFURLSessionTaskDependencyTreeNode : NSObject {
    NSMutableDictionary * _dependentToParentStreamIDs;
    NSMutableDictionary * _parentToParentStreamIDs;
    NSMutableArray * children;
    NSMutableArray * childrenResourceIdentifiers;
    NSURLSessionTaskDependencyDescription * dependencyDescription;
    NSNumber * rootParentStreamID;
}

- (void)dealloc;
- (id)init;

@end
