
@interface AVTCompositor : NSObject {
    NSMutableSet * _textureProviders;
}

+ (id)propertyNames;

- (void).cxx_destruct;
- (void)addClient:(id)arg1;
- (void)componentDidChangeForTypes:(unsigned long long)arg1;
- (void)configureMaterial:(id)arg1 propertyNamed:(id)arg2 memoji:(id)arg3;
- (id)init;
- (void)removeClient:(id)arg1;
- (void)skinColorDidChange;

@end
