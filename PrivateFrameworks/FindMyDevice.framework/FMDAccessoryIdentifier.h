
@interface FMDAccessoryIdentifier : NSObject <FMDCodable, FMDIdentifiable, NSCopying> {
    NSString * _string;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *string;
@property (readonly) Class superclass;
@property (getter=isValid, nonatomic, readonly) bool valid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)computeAccessoryIdentifierWithAddress:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)encodeWithFMDCoder:(id)arg1 error:(id*)arg2;
- (unsigned long long)hash;
- (id)initWithAddress:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceVendor:(id)arg1 deviceProductId:(id)arg2;
- (id)initWithFMDCoder:(id)arg1 error:(id*)arg2;
- (id)initWithString:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (void)setString:(id)arg1;
- (id)string;
- (id)stringValue;

@end
