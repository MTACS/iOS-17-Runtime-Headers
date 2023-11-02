
@interface ThermalNominal : COCondition {
    long long  _actualState;
    long long  _desiredState;
    NSString * _thermalLevelKey;
}

@property (nonatomic) long long actualState;
@property (nonatomic) long long desiredState;

+ (id)description;
+ (id)profileFriendlyName;
+ (id)thermalStateEnumToCLTMStringKey:(long long)arg1;

- (void).cxx_destruct;
- (bool)active;
- (long long)actualState;
- (long long)desiredState;
- (id)identifierName;
- (id)init;
- (id)initWithThermalLevel:(long long)arg1;
- (bool)isDestructive;
- (bool)isInternalOnly;
- (void)setActualState:(long long)arg1;
- (void)setDesiredState:(long long)arg1;
- (bool)setUp;
- (void)tearDown;
- (id)userFriendlyName;

@end
