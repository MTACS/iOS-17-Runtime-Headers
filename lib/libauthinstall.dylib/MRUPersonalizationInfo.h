
@interface MRUPersonalizationInfo : NSObject <NSCoding> {
    NSString * _componentName;
    MRUHardwareInfo * _hardwareInfo;
    NSData * _nonce;
    NSString * _objectName;
    NSNumber * _tagNumber;
}

@property (readonly) NSString *_componentNameSuffix;
@property (readonly) NSString *_propertyNameSuffix;
@property (readonly) NSDictionary *asDictionary;
@property (readonly) NSString *boardIDPropertyName;
@property (readonly) NSString *chipIDPropertyName;
@property (readonly) NSString *ecidPropertyName;
@property (readonly) MRUHardwareInfo *hardwareInfo;
@property (readonly) NSData *nonce;
@property (readonly) NSString *noncePropertyName;
@property (readonly) NSString *objectName;
@property (readonly) NSString *productionModePropertyName;
@property (readonly) NSString *securityDomainPropertyName;
@property (readonly) NSString *securityModePropertyName;
@property (readonly) NSString *tag;
@property (readonly) NSString *ticketName;

- (void).cxx_destruct;
- (id)_componentNameSuffix;
- (id)_propertyNameSuffix;
- (id)asDictionary;
- (id)boardIDPropertyName;
- (id)chipIDPropertyName;
- (id)description;
- (id)ecidPropertyName;
- (void)encodeWithCoder:(id)arg1;
- (id)hardwareInfo;
- (id)initWithCoder:(id)arg1;
- (id)initWithHardwareInfo:(id)arg1 componentName:(id)arg2 objectName:(id)arg3 nonce:(id)arg4;
- (id)initWithHardwareInfo:(id)arg1 componentName:(id)arg2 objectName:(id)arg3 nonce:(id)arg4 tagNumber:(id)arg5;
- (id)initWithOptions:(id)arg1 error:(id*)arg2;
- (id)nonce;
- (id)noncePropertyName;
- (id)objectName;
- (id)productionModePropertyName;
- (id)securityDomainPropertyName;
- (id)securityModePropertyName;
- (id)tag;
- (id)ticketName;

@end
