
@interface HMDAccessoryNetworkProtectionGroup : NSObject <HMDBackingStoreObjectProtocol, NSSecureCoding> {
    NSNumber * _category;
    HMDHome * _home;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _manufacturer;
    long long  _targetProtectionMode;
    NSUUID * _uuid;
}

@property (nonatomic, retain) NSNumber *category;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMDHome *home;
@property (nonatomic, retain) NSString *manufacturer;
@property (readonly) Class superclass;
@property (nonatomic) long long targetProtectionMode;
@property (readonly) NSUUID *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)category;
- (void)configureWithHome:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)home;
- (id)initWithCoder:(id)arg1;
- (id)initWithModel:(id)arg1;
- (id)initWithUUID:(id)arg1 manufacturer:(id)arg2 category:(id)arg3 targetProtectionMode:(long long)arg4;
- (bool)isEqual:(id)arg1;
- (id)manufacturer;
- (id)modelForVersion:(long long)arg1;
- (id)modelWithObjectChangeType:(unsigned long long)arg1;
- (void)setCategory:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setManufacturer:(id)arg1;
- (void)setTargetProtectionMode:(long long)arg1;
- (long long)targetProtectionMode;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)uuid;

@end
