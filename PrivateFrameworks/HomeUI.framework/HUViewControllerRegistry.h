
@interface HUViewControllerRegistry : NSObject {
    NSMutableDictionary * _viewControllerClassesByIdentifier;
}

@property (nonatomic, readonly) NSMutableDictionary *viewControllerClassesByIdentifier;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)registerViewControllerClass:(Class)arg1 forIdentifier:(id)arg2;
- (Class)viewControllerClassForIdentifier:(id)arg1;
- (id)viewControllerClassesByIdentifier;

@end
