
@interface MNTransitStepInstruction : MNTransitInstruction {
    NSDictionary * _overridenInstructionsMapping;
    GEOComposedRouteStep * _step;
}

@property (nonatomic, readonly) NSDictionary *overridenInstructionsMapping;
@property (nonatomic, readonly) GEOComposedRouteStep *step;

+ (id)instructionForStep:(id)arg1 context:(long long)arg2;
+ (id)instructionForStep:(id)arg1 overrides:(id)arg2 context:(long long)arg3;

- (void).cxx_destruct;
- (id)initWithStep:(id)arg1 overrides:(id)arg2 context:(long long)arg3;
- (id)instructionSet;
- (id)overridenInstructionsMapping;
- (id)step;

@end
