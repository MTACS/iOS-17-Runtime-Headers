
@interface SXFrameworkAssembly : NSObject <TFFrameworkAssembly> {
    NSArray * _assemblies;
}

@property (nonatomic, readonly, copy) NSArray *assemblies;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)assemblies;
- (id)init;

@end
