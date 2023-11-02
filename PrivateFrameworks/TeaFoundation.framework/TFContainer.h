
@interface TFContainer : NSObject {
    void container;
    void resolver;
}

@property (nonatomic, readonly) <TFResolver> *resolver;

- (void).cxx_destruct;
- (id)init;
- (id)initWithBundleAssemblies:(id)arg1 assemblies:(id)arg2;
- (id)resolver;

@end
