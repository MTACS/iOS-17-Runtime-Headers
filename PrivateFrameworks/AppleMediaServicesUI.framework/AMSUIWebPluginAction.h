
@interface AMSUIWebPluginAction : AMSUIWebAction {
    NSString * _actionIdentifier;
    NSString * _bundleIdentifier;
    NSDictionary * _options;
}

@property (nonatomic, readonly) NSString *actionIdentifier;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSDictionary *options;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)bundleIdentifier;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)options;
- (id)runAction;

@end
