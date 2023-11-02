
@interface HMDSettingConstraint : NSObject <HMDSettingBaseProtocol> {
    NSData * _dataValue;
    NSUUID * _identifier;
    NSNumber * _numberValue;
    NSUUID * _parentIdentifier;
    NSNumber * _type;
}

@property (readonly) NSData *dataValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy) NSString *name;
@property (readonly) NSNumber *numberValue;
@property (readonly, copy) NSUUID *parentIdentifier;
@property (readonly) Class superclass;
@property (readonly, copy) NSNumber *type;
@property (readonly, copy) id value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dataValue;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 parentIdentifier:(id)arg2 type:(id)arg3 numberValue:(id)arg4 dataValue:(id)arg5;
- (id)name;
- (id)numberValue;
- (id)parentIdentifier;
- (id)type;
- (id)value;

@end
