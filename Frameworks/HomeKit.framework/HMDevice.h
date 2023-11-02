
@interface HMDevice : NSObject <HFStateDumpBuildable, HMFLogging, HMFObject, HMObjectMerge, NSSecureCoding> {
    bool  _currentDevice;
    NSString * _idsDestination;
    NSUUID * _idsIdentifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _name;
    HMFProductInfo * _productInfo;
    HMFKey * _rapportIRK;
    bool  _supportsHH2;
    NSUUID * _uniqueIdentifier;
    NSUUID * _uuid;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (getter=isCurrentDevice, readonly) bool currentDevice;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) NSString *idsDestination;
@property (copy) NSUUID *idsIdentifier;
@property (copy) NSString *name;
@property (readonly, copy) NSString *privateDescription;
@property (copy) HMFProductInfo *productInfo;
@property (readonly, copy) NSString *propertyDescription;
@property (copy) HMFKey *rapportIRK;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property bool supportsHH2;
@property (readonly, copy) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly, copy) NSUUID *uuid;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)logCategory;
+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)IDSDestinationForIDSService:(id)arg1;
- (id)IDSDeviceForIDSService:(id)arg1;
- (id)attributeDescriptions;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)idsDestination;
- (id)idsIdentifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 name:(id)arg2 isCurrentDevice:(bool)arg3;
- (bool)isCurrentDevice;
- (bool)isEqual:(id)arg1;
- (id)logIdentifier;
- (bool)mergeFromNewObject:(id)arg1;
- (id)name;
- (id)privateDescription;
- (id)productInfo;
- (id)rapportIRK;
- (void)setIdsDestination:(id)arg1;
- (void)setIdsIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setProductInfo:(id)arg1;
- (void)setRapportIRK:(id)arg1;
- (void)setSupportsHH2:(bool)arg1;
- (id)shortDescription;
- (bool)supportsHH2;
- (id)uniqueIdentifier;
- (id)uuid;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_stateDumpBuilderWithContext:(id)arg1;

@end
