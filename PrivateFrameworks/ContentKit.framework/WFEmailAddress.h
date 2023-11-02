
@interface WFEmailAddress : NSObject <NSCopying, NSSecureCoding, WFNaming, WFSerializableContent> {
    NSString * _address;
    NSString * _label;
}

@property (nonatomic, readonly) NSString *address;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSString *localizedLabel;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *wfName;

+ (id)addressWithEmailAddress:(id)arg1;
+ (id)addressWithEmailAddress:(id)arg1 label:(id)arg2;
+ (id)addressesWithMailtoURL:(id)arg1;
+ (id)addressesWithTextCheckingResult:(id)arg1;
+ (id)emailAddressesInString:(id)arg1 error:(id*)arg2;
+ (id)objectWithWFSerializedRepresentation:(id)arg1;
+ (bool)stringContainsEmailAddresses:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)address;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAddress:(id)arg1 label:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)label;
- (id)localizedLabel;
- (id)wfName;
- (id)wfSerializedRepresentation;

@end
