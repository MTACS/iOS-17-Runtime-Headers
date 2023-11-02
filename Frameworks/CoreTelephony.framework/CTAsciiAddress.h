
@interface CTAsciiAddress : NSObject <CTMessageAddress, NSCopying> {
    NSString * _address;
}

@property (readonly) NSString *address;

+ (id)asciiAddressWithString:(id)arg1;

- (void).cxx_destruct;
- (id)address;
- (id)canonicalFormat;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)encodedString;
- (id)initWithAddress:(id)arg1;

@end
