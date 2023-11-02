
@interface WFStorageServiceRegistry : NSObject {
    NSArray * _registeredServices;
}

@property (nonatomic, readonly) NSSet *objectRepresentationClasses;
@property (nonatomic, readonly) NSArray *registeredServices;
@property (nonatomic, readonly) NSArray *storageServices;

+ (void)registerAllActionKitStorageServiceClasses;
+ (void)registerStorageServiceClass:(Class)arg1;
+ (id)sharedRegistry;

- (void).cxx_destruct;
- (id)init;
- (id)objectRepresentationClasses;
- (id)registeredServices;
- (id)storageServiceWithName:(id)arg1;
- (id)storageServices;

@end
