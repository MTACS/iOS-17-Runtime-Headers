
@interface HMICamera : HMFObject <HMFLogging, NSSecureCoding> {
    NSString * _firmwareVersion;
    bool  _hasBattery;
    NSUUID * _identifier;
    NSString * _manufacturer;
    NSString * _model;
    NSString * _name;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSString *firmwareVersion;
@property (readonly) bool hasBattery;
@property (readonly) unsigned long long hash;
@property (readonly) NSUUID *identifier;
@property (readonly) NSString *manufacturer;
@property (readonly) NSString *model;
@property (readonly) NSString *name;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (void)encodeWithCoder:(id)arg1;
- (id)firmwareVersion;
- (bool)hasBattery;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 manufacturer:(id)arg3 model:(id)arg4;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 manufacturer:(id)arg3 model:(id)arg4 firmwareVersion:(id)arg5;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 manufacturer:(id)arg3 model:(id)arg4 firmwareVersion:(id)arg5 hasBattery:(bool)arg6;
- (bool)isEqual:(id)arg1;
- (id)manufacturer;
- (id)model;
- (id)name;

@end
