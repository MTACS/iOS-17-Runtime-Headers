
@interface EXBNullDisplaySource : NSObject <EXBDisplaySourcing> {
    NSMutableDictionary * _connectedIdentityToConfiguration;
    NSMutableSet * _displayObservers;
    <FBSDisplayTransformer> * _displayTransformer;
    FBSDisplayConfiguration * _mainConfiguration;
    FBSDisplayIdentity * _mainIdentity;
    id /* block */  _transformScheduler;
}

@property (nonatomic, readonly, copy) NSSet *connectedIdentities;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <FBSDisplayTransformer> *displayTransformer;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) FBSDisplayConfiguration *mainConfiguration;
@property (nonatomic, readonly, copy) FBSDisplayIdentity *mainIdentity;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ transformScheduler;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)configurationForIdentity:(id)arg1;
- (void)connectDisplay:(id)arg1;
- (id)connectedIdentities;
- (void)disconnectDisplay:(id)arg1;
- (id)displayTransformer;
- (id)initWithMainDisplay:(id)arg1;
- (id)mainConfiguration;
- (id)mainIdentity;
- (void)removeObserver:(id)arg1;
- (void)setDisplayTransformer:(id)arg1;
- (void)setTransformScheduler:(id /* block */)arg1;
- (id /* block */)transformScheduler;
- (void)updateDisplay:(id)arg1;
- (void)updateTransformsWithCompletion:(id /* block */)arg1;

@end
