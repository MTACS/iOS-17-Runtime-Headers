
@protocol LAUIAuthentication

@required

- (bool)disableMechanism:(unsigned long long)arg1 error:(id*)arg2;
- (bool)enableMechanism:(unsigned long long)arg1 error:(id*)arg2;
- (id)initWithMechanisms:(unsigned long long)arg1;
- (id)initWithMechanisms:(unsigned long long)arg1 context:(LAContext *)arg2;
- (bool)isMechanismActive:(unsigned long long)arg1;
- (bool)isMechanismAvailable:(unsigned long long)arg1 error:(id*)arg2;
- (bool)isMechanismEnabled:(unsigned long long)arg1;

@end
