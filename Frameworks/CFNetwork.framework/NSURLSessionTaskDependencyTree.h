
@interface NSURLSessionTaskDependencyTree : NSObject {
    NSMutableDictionary * _dependencies;
    __NSCFURLSessionTaskDependencyTreeNode * _effectiveTree;
    NSURL * _mainDocumentURL;
}

@property (nonatomic, retain) NSURL *mainDocumentURL;

+ (id)dependencyTreeDefaultWeb;
+ (id)dependencyTreeWithJSONData:(id)arg1 error:(id*)arg2;
+ (id)dependencyTreeWithMainDocumentURL:(id)arg1 dependencyDescriptions:(id)arg2;

- (void)dealloc;
- (id)mainDocumentURL;
- (void)setMainDocumentURL:(id)arg1;

@end
