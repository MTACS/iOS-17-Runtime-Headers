
@interface HMDAccountIdentifier : HMFObject <HMFObject, NSCopying, NSSecureCoding> {
    _HMDAccountIdentifier * _internal;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (getter=isAuthenticated, readonly) bool authenticated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy) _HMDAccountIdentifier *internal;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *senderCorrelationIdentifier;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

+ (id)accountIdentifierForAccountHandle:(id)arg1;
+ (id)accountIdentifierForAppleAccountContext:(id)arg1;
+ (id)accountIdentifierForMessageContext:(id)arg1;
+ (id)accountIdentifierForSenderCorrelationIdentifier:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithInternal:(id)arg1;
- (id)internal;
- (bool)isAuthenticated;
- (bool)isEqual:(id)arg1;
- (id)senderCorrelationIdentifier;
- (id)shortDescription;

@end
