
@interface HMDDeviceAddress : NSObject <NSCopying> {
    NSString * _idsDestination;
    NSUUID * _idsIdentifier;
}

@property (getter=isCurrentDevice, readonly) bool currentDevice;
@property (nonatomic, readonly) NSString *idsDestination;
@property (nonatomic, readonly) NSUUID *idsIdentifier;

+ (id)addressWithIDSIdentifier:(id)arg1 idsDestination:(id)arg2;
+ (id)localDeviceIDSIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)idsDestination;
- (id)idsIdentifier;
- (id)initWithIDSIdentifier:(id)arg1 idsDestination:(id)arg2;
- (bool)isCurrentDevice;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalentToDeviceAddress:(id)arg1;

@end
