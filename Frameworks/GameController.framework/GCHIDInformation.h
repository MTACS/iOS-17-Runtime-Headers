
@interface GCHIDInformation : NSObject <GCControllerHIDInfo, NSSecureCoding> {
    <NSObject><NSCopying><NSSecureCoding> * _identifier;
    NSNumber * _registryID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <NSObject><NSCopying><NSSecureCoding> *identifier;
@property (nonatomic, copy) NSNumber *registryID;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)registryID;
- (void)setController:(id)arg1;
- (void)setRegistryID:(id)arg1;

@end
