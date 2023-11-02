
@protocol UIMutableTraitsInternal <UIMutableTraitsPrivate>

@required

- (NSObject *)_environmentWrapper;
- (id)_objectForTraitToken:(id <_UIObjectTraitTokenProtocol>)arg1;
- (void)_setCGFloatValue:(double)arg1 forTraitToken:(id <_UICGFloatTraitTokenProtocol>)arg2;
- (void)_setEnvironmentWrapper:(NSObject *)arg1;
- (void)_setNSIntegerValue:(long long)arg1 forTraitToken:(id <_UINSIntegerTraitTokenProtocol>)arg2;
- (void)_setNSUIntegerValue:(unsigned long long)arg1 forTraitToken:(id <_UINSUIntegerTraitTokenProtocol>)arg2;
- (void)_setObject:(id)arg1 forTraitToken:(id <_UIObjectTraitTokenProtocol>)arg2;
- (void)_setTintColor:(UIColor *)arg1;
- (UIColor *)_tintColor;
- (double)_valueForCGFloatTraitToken:(id <_UICGFloatTraitTokenProtocol>)arg1;
- (long long)_valueForNSIntegerTraitToken:(id <_UINSIntegerTraitTokenProtocol>)arg1;
- (unsigned long long)_valueForNSUIntegerTraitToken:(id <_UINSUIntegerTraitTokenProtocol>)arg1;

@end
