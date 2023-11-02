
@interface CPLPlatform : NSObject {
    NSMapTable * _abstractClassToImplementation;
    NSObject<OS_dispatch_queue> * _lock;
    NSString * _suffix;
}

@property (nonatomic, copy) NSString *suffix;

+ (id)currentPlatform;
+ (id)defaultPlatform;
+ (void)setDefaultPlatform:(id)arg1;
+ (void)setProxyImplementationForPlatform:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (Class)implementationClassForAbstractClass:(Class)arg1;
- (id)init;
- (id)newPlatformImplementationForObject:(id)arg1;
- (void)setPlatformImplementation:(Class)arg1 forClass:(Class)arg2;
- (void)setSuffix:(id)arg1;
- (id)suffix;

@end
