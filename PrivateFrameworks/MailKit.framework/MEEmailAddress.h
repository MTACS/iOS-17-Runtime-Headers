
@interface MEEmailAddress : NSObject <ECEmailAddressConvertible, NSCopying, NSSecureCoding> {
    <ECEmailAddressConvertible> * _convertible;
}

@property (nonatomic, readonly, copy) NSString *addressString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) ECEmailAddress *emailAddressValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *rawString;
@property (nonatomic, readonly) NSString *stringValue;
@property (readonly) Class superclass;

+ (id)emailAddressesForAddresses:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)addressString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)emailAddressValue;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRawString:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)rawString;
- (id)stringValue;

@end
