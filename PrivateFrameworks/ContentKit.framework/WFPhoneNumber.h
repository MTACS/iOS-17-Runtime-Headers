
@interface WFPhoneNumber : NSObject <NSCopying, NSSecureCoding, WFNaming, WFSerializableContent> {
    NSString * _contactName;
    NSString * _label;
    NSString * _string;
}

@property (nonatomic, readonly) NSString *contactName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *formattedPhoneNumber;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSString *localizedLabel;
@property (nonatomic, readonly) NSString *normalizedPhoneNumber;
@property (nonatomic, readonly) NSString *string;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *wfName;

+ (id)objectWithWFSerializedRepresentation:(id)arg1;
+ (id)phoneNumberWithPhoneNumberString:(id)arg1;
+ (id)phoneNumberWithPhoneNumberString:(id)arg1 contactName:(id)arg2 label:(id)arg3;
+ (id)phoneNumberWithTextCheckingResult:(id)arg1;
+ (id)phoneNumbersInString:(id)arg1 error:(id*)arg2;
+ (bool)stringContainsPhoneNumbers:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)contactName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)formattedPhoneNumber;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPhoneNumberString:(id)arg1 contactName:(id)arg2 label:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)label;
- (id)localizedLabel;
- (id)normalizedPhoneNumber;
- (id)string;
- (id)wfName;
- (id)wfSerializedRepresentation;

@end
