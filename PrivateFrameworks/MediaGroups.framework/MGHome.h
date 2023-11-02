
@interface MGHome : MGGroup

+ (id)predicateForCurrentDevice;
+ (id)predicateForType;
+ (id)type;

- (id)HomeKitHomeIdentifier;
- (id)HomeKitHomeWithHomeManager:(id)arg1;
- (id)initWithClientService:(id)arg1 home:(id)arg2;
- (id)initWithConnectionProvider:(id)arg1 home:(id)arg2;

@end
