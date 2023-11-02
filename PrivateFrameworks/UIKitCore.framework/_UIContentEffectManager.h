
@interface _UIContentEffectManager : NSObject {
    NSMutableDictionary * _effects;
}

@property (nonatomic, readonly) NSMutableDictionary *effects;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_stopManagingEffect:(id)arg1;
- (id)compatibleEffectForDescriptor:(id)arg1;
- (id)compatibleEffectForKey:(id)arg1 descriptor:(id)arg2 constructor:(id /* block */)arg3;
- (id)effects;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

@end
