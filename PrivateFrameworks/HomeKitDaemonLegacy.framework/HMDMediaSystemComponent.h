
@interface HMDMediaSystemComponent : HMFObject <HMFDumpState, HMFLogging, NSSecureCoding> {
    HMDAccessory * _accessory;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    HMMediaSystemRole * _role;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) HMDAccessory *accessory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDMediaProfile *mediaProfile;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, readonly) HMMediaSystemRole *role;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uuid;

+ (id)accessoryForMediaSystemComponentWithDictionary:(id)arg1 home:(id)arg2;
+ (id)logCategory;
+ (id)mediaSystemComponentWithDictionary:(id)arg1 home:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessory;
- (id)attributeDescriptions;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 accessory:(id)arg2 role:(id)arg3;
- (id)logIdentifier;
- (id)mediaProfile;
- (id)privateDescription;
- (id)propertyQueue;
- (id)role;
- (id)serialize;
- (void)setRole:(id)arg1;
- (id)uuid;

@end
