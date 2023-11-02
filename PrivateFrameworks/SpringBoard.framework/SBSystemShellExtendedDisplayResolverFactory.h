
@interface SBSystemShellExtendedDisplayResolverFactory : NSObject <SBWindowingModeResolverFactory>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long displayWindowingMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (long long)displayWindowingMode;
- (id)resolverForPhysicalDisplay:(id)arg1;

@end
