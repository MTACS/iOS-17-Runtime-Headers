
@interface WFSandboxExtensionManager : NSObject {
    NSDictionary * _extensionClassesPerResource;
    NSSet * _extensionResourcesClassNames;
}

@property (nonatomic, readonly, copy) NSDictionary *extensionClassesPerResource;
@property (nonatomic, readonly, copy) NSSet *extensionResourcesClassNames;

+ (id)allAvailableExtensionResourceClassNames;
+ (bool)hasExtensionForResourceClassName:(id)arg1;

- (void).cxx_destruct;
- (id)extensionClassesPerResource;
- (id)extensionResourcesClassNames;
- (id)init;
- (id)initWithExtensionClassesPerResource:(id)arg1;
- (id)requestSandboxExtensionForResources:(id)arg1 destinationProcessAuditToken:(struct { unsigned int x1[8]; })arg2 unauthorizedResources:(id*)arg3;

@end
