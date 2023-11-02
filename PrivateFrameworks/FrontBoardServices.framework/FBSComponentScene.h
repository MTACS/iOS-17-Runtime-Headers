
@interface FBSComponentScene : NSProxy <FBSComponentScene> {
    Class  _extension;
    id  _scene;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (Class)class;
- (id)clientSettings;
- (bool)conformsToExtension:(Class)arg1;
- (bool)conformsToProtocol:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (unsigned long long)hash;
- (id)initWithScene:(id)arg1 extension:(Class)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isKindOfClass:(Class)arg1;
- (bool)isMemberOfClass:(Class)arg1;
- (bool)isProxy;
- (id)loggingIdentifier;
- (bool)respondsToSelector:(SEL)arg1;
- (id)scene;
- (void)sendActions:(id)arg1;
- (void)sendPrivateActions:(id)arg1;
- (id)settings;
- (id)siblingComponentOfClass:(Class)arg1;
- (Class)superclass;

@end
