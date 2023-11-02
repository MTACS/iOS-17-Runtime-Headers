
@interface _UIVisualStyleRegistry : NSObject {
    NSMutableDictionary * __classToVisualStyleClass;
}

+ (id)defaultRegistry;
+ (id)registryForIdiom:(long long)arg1;
+ (id)registryForTraitEnvironment:(id)arg1;

- (void).cxx_destruct;
- (id)init;
- (void)registerVisualStyleClass:(Class)arg1 forStylableClass:(Class)arg2;
- (Class)visualStyleClassForStylableClass:(Class)arg1;
- (Class)visualStyleClassForView:(id)arg1;

@end
