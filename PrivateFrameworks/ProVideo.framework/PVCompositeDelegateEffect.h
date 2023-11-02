
@interface PVCompositeDelegateEffect : PVEffect {
    struct atomic<int> { 
        struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { 
            _Atomic int __a_value; 
        } __a_; 
    }  _loaded;
    <PVCompositeDelegate> * _renderDelegate;
    id  _userContext;
}

@property (nonatomic, retain) <PVCompositeDelegate> *renderDelegate;
@property (nonatomic, retain) id userContext;

+ (void)registerEffects;

- (void).cxx_destruct;
- (id)initWithEffectID:(id)arg1;
- (bool)loadEffect;
- (void)releaseEffect;
- (id)renderDelegate;
- (void)setRenderDelegate:(id)arg1;
- (void)setUserContext:(id)arg1;
- (id)userContext;

@end
