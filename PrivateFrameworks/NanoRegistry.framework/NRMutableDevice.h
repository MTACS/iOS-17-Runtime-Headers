
@interface NRMutableDevice : NRMutableStateBase <NRMutableStateParentDelegate, NSFastEnumeration> {
    NSMutableDictionary * _properties;
    NRPBMutableDevice * _protobuf;
}

@property (nonatomic, readonly) bool isActive;
@property (nonatomic, readonly) bool isAltAccount;
@property (nonatomic, readonly) bool isArchived;
@property (nonatomic, readonly) bool isPaired;
@property (nonatomic, readonly) bool isSetup;
@property (nonatomic, readonly) bool migratable;
@property (nonatomic, readonly) NSUUID *pairingID;
@property (nonatomic, retain) NRPBMutableDevice *protobuf;

+ (id)diffFrom:(id)arg1 to:(id)arg2;
+ (id)diffsToActivate:(bool)arg1 withDate:(id)arg2;
+ (id)diffsToClearStatusCodeAndCompatibilityState;
+ (id)diffsToPair:(bool)arg1 withDate:(id)arg2;
+ (id)diffsToSetStatusCode:(unsigned long long)arg1;
+ (id)diffsToSetStatusCode:(unsigned long long)arg1 andCompatibilityState:(unsigned short)arg2;
+ (id)enclosedClassTypes;
+ (void)parseDiff:(id)arg1 forPropertyChange:(id)arg2 withBlock:(id /* block */)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_createIndex:(id)arg1;
- (id)allPropertyNames;
- (id)applyDiff:(id)arg1 upOnly:(bool)arg2 notifyParent:(bool)arg3 unconditional:(bool)arg4;
- (void)child:(id)arg1 didApplyDiff:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (void)invalidate;
- (bool)isActive;
- (bool)isAltAccount;
- (bool)isArchived;
- (bool)isEqual:(id)arg1;
- (bool)isPaired;
- (bool)isSetup;
- (bool)migratable;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)pairingID;
- (id)propertyForName:(id)arg1;
- (id)protobuf;
- (void)removePropertyForName:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setProperty:(id)arg1 forName:(id)arg2;
- (void)setProtobuf:(id)arg1;
- (bool)supportsCapability:(id)arg1;

@end
