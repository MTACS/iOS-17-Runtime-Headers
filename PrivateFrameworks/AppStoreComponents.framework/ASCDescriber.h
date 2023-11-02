
@interface ASCDescriber : NSObject {
    <NSObject> * _object;
    NSMutableArray * _properties;
}

@property (nonatomic, readonly) <NSObject> *object;
@property (nonatomic, readonly) NSMutableArray *properties;

+ (id)nilObject;

- (void).cxx_destruct;
- (void)addBool:(bool)arg1 withName:(id)arg2;
- (void)addDouble:(double)arg1 withName:(id)arg2;
- (void)addInt64:(long long)arg1 withName:(id)arg2;
- (void)addInteger:(long long)arg1 withName:(id)arg2;
- (void)addObject:(id)arg1 withName:(id)arg2;
- (void)addSensitiveObject:(id)arg1 withName:(id)arg2;
- (void)addUInt64:(unsigned long long)arg1 withName:(id)arg2;
- (void)addUnsignedInteger:(unsigned long long)arg1 withName:(id)arg2;
- (id)describeObject;
- (id)describeProperties;
- (id)description;
- (id)finalizeDescription;
- (unsigned long long)hash;
- (id)initWithObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)object;
- (id)properties;

@end
