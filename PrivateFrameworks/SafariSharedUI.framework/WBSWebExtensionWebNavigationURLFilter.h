
@interface WBSWebExtensionWebNavigationURLFilter : NSObject {
    NSArray * _predicateGroups;
}

- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1 outErrorMessage:(id*)arg2;
- (bool)matchesURL:(id)arg1;

@end
