
@interface CARPrototypeBoolPref : CARPrototypePref

@property (nonatomic, readonly) bool cachedValueBool;
@property (nonatomic, readonly) bool invertValueForState;
@property (nonatomic, readonly) bool valueBool;

+ (id)prefWithDomain:(id)arg1 key:(id)arg2 title:(id)arg3 invertValueForState:(bool)arg4 valueChangedBlock:(id /* block */)arg5;

- (bool)cachedState;
- (bool)cachedValueBool;
- (id)description;
- (bool)invertValueForState;
- (void)setCachedState:(bool)arg1;
- (void)setState:(bool)arg1;
- (bool)state;
- (bool)valueBool;

@end
