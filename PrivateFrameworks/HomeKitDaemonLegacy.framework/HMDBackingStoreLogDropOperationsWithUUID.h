
@interface HMDBackingStoreLogDropOperationsWithUUID : HMDBackingStoreOperation {
    long long  _compareValue;
    long long  _maskValue;
    NSUUID * _uuid;
}

@property (nonatomic) long long compareValue;
@property (nonatomic) long long maskValue;
@property (nonatomic, retain) NSUUID *uuid;

- (void).cxx_destruct;
- (long long)compareValue;
- (id)initWithUUID:(id)arg1 pushingTo:(unsigned long long)arg2 resultBlock:(id /* block */)arg3;
- (id)mainReturningError;
- (long long)maskValue;
- (void)setCompareValue:(long long)arg1;
- (void)setMaskValue:(long long)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;

@end
