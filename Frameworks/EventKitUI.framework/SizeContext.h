
@interface SizeContext : NSObject {
    NSMutableArray * _windowContextStack;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)hasViewHierarchyForCurrentContext;
- (id)init;
- (void)popContextFromViewHierarchy:(id)arg1;
- (void)pushContextWithViewHierarchy:(id)arg1;
- (id)viewHierarchyForCurrentContext;

@end
