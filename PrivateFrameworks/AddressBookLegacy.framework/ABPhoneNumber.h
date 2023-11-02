
@interface ABPhoneNumber : NSObject {
    struct { 
        char *internationalCallingCode; 
        char *nationalPrefix; 
        char *carrierCode; 
        unsigned int carrierCodeLen; 
        char *areaCode; 
        unsigned int areaCodeLen; 
        char *number; 
        unsigned int numberLen; 
    }  _decomposedPhoneNumber;
    NSString * _lastFour;
    NSString * _originalStringValue;
    char * _phoneNumberBytes;
}

@property (readonly) struct { char *x1; char *x2; char *x3; unsigned int x4; char *x5; unsigned int x6; char *x7; unsigned int x8; }*decomposedPhoneNumberPointer;
@property (readonly) NSString *lastFour;
@property (readonly) char *normalizedPhoneChars;
@property (readonly) NSString *originalStringValue;

- (void)dealloc;
- (struct { char *x1; char *x2; char *x3; unsigned int x4; char *x5; unsigned int x6; char *x7; unsigned int x8; }*)decomposedPhoneNumberPointer;
- (id)initWithPhoneNumberString:(id)arg1 countryCode:(id)arg2;
- (id)lastFour;
- (char *)normalizedPhoneChars;
- (id)originalStringValue;

@end
