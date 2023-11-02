
@interface WFAccountContentLocation : WFAppContentLocation <NSCopying, NSSecureCoding, WFSerializableContent> {
    NSString * _accountIdentifier;
}

@property (nonatomic, readonly) NSString *accountIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)locationWithAccountIdentifier:(id)arg1 appDescriptor:(id)arg2;
+ (id)locationWithAccountIdentifier:(id)arg1 appDescriptor:(id)arg2 managedLevel:(unsigned long long)arg3;
+ (id)locationWithAccountIdentifier:(id)arg1 appDescriptor:(id)arg2 managedLevel:(unsigned long long)arg3 promptingBehaviour:(unsigned long long)arg4;
+ (id)locationWithAccountIdentifier:(id)arg1 appDescriptor:(id)arg2 promptingBehaviour:(unsigned long long)arg3;
+ (id)objectWithWFSerializedRepresentation:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (id)appContentLocation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAccountIdentifier:(id)arg1 appDescriptor:(id)arg2 serializedAppDescriptor:(id)arg3 managedLevel:(unsigned long long)arg4 promptingBehaviour:(unsigned long long)arg5;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedMDMDescription;
- (id)wfSerializedRepresentation;

@end
