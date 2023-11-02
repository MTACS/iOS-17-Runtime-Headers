
@interface CNPhoneNumber : NSObject <CNObjectValidation, CNUIURLDestinationID, NSCopying, NSSecureCoding> {
    NSString * _initialCountryCode;
    struct __CFPhoneNumber { } * _phoneNumberRef;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _stateLock;
    NSString * _stringValue;
}

@property (nonatomic, readonly, copy) NSString *countryCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *digits;
@property (nonatomic, readonly, copy) NSString *formattedInternationalStringValue;
@property (nonatomic, readonly, copy) NSString *formattedStringValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *initialCountryCode;
@property (nonatomic, readonly, copy) NSString *stringValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *unformattedInternationalStringValue;

// Image: /System/Library/Frameworks/Contacts.framework/Contacts

+ (id /* block */)StringValue;
+ (id)_countryCodeForNorthAmericanDialingPlanAreaCodesExcludingUS;
+ (id)_countryCodesForNorthAmericanDialingPlan;
+ (bool)_isCountryCodeForNorthAmericanDialingPlan:(id)arg1;
+ (struct __CFPhoneNumber { }*)createCFPhoneNumberForStringValue:(id)arg1 countryCode:(id)arg2;
+ (id)defaultCountryCode;
+ (id)dialingCodeForISOCountryCode:(id)arg1;
+ (id)new;
+ (id)phoneNumberWithCopiedStringValue:(id)arg1;
+ (id)phoneNumberWithDigits:(id)arg1 countryCode:(id)arg2;
+ (id)phoneNumberWithStringValue:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)unsupportedCountryCodes;

- (void).cxx_destruct;
- (id)_countryCodeFromPhoneNumberRef;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (void)dealloc;
- (id)description;
- (id)digits;
- (id)digitsRemovingDialingCode;
- (void)encodeWithCoder:(id)arg1;
- (id)formattedInternationalStringValue;
- (id)formattedStringValue;
- (id)formattedStringValueRemovingDialingCode;
- (id)fullyQualifiedDigits;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithStringValue:(id)arg1;
- (id)initWithStringValue:(id)arg1 countryCode:(id)arg2;
- (id)initialCountryCode;
- (bool)isEqual:(id)arg1;
- (bool)isFullyQualified;
- (bool)isLikePhoneNumber:(id)arg1;
- (bool)isLikePhoneNumberForSamePerson:(id)arg1;
- (bool)isValid:(id*)arg1;
- (id)lastFourDigits;
- (struct __CFPhoneNumber { }*)nts_lazyPhoneNumberRef;
- (struct __CFPhoneNumber { }*)phoneNumberRef;
- (id)primitiveInitWithStringValue:(id)arg1 countryCode:(id)arg2;
- (id)stringValue;
- (id)stringValueWithCFPhoneNumberOptions:(unsigned long long)arg1;
- (id)unformattedInternationalStringValue;

// Image: /System/Library/Frameworks/AddressBook.framework/AddressBook

+ (id)fullyQualifiedStringForStringValue:(id)arg1 countryCode:(id)arg2;

// Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore

- (id)_cnui_URLDestinationID;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

- (id)pkFormattedStringValue;

@end
