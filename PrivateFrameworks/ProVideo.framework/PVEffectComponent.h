
@interface PVEffectComponent : NSObject <PVEffectLoadDelegate, PVEffectPropertyDelegate> {
    PVEffect * _effect;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) PVEffect *effect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)effect;
- (void)effect:(id)arg1 updateProperties:(id)arg2 allProperties:(id)arg3;
- (void)effectDidLoad:(id)arg1 isReady:(bool)arg2;
- (void)effectDidUnload:(id)arg1;
- (id)initWithEffect:(id)arg1;
- (void)setEffect:(id)arg1;

@end
