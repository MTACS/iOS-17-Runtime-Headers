
@interface BSPluginBundle : NSObject <BSDescriptionProviding> {
    NSBundle * _bundle;
    NSString * _identifier;
    NSString * _name;
    Class  _principalClass;
    NSString * _requiredClassOrProtocolName;
    NSString * _specifiedClassName;
    NSString * _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (getter=isLoaded, nonatomic, readonly) bool loaded;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) Class principalClass;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *type;
@property (getter=isValid, nonatomic, readonly) bool valid;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)identifier;
- (bool)isLoaded;
- (bool)isValid;
- (bool)loadPlugin;
- (bool)loadPlugin:(id /* block */)arg1;
- (id)name;
- (Class)principalClass;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)type;

@end
