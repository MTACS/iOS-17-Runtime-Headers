
@interface WebPluginPackage : WebBasePluginPackage {
    NSBundle * nsBundle;
}

- (id)bundle;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (bool)load;
- (Class)viewFactory;

@end
