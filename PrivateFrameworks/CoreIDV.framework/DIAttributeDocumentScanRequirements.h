
@interface DIAttributeDocumentScanRequirements : DIAttributeImageCaptureRequirements <NSMutableCopying, NSSecureCoding> {
    NSString * _countryCode;
    NSString * _type;
}

@property (nonatomic, copy) NSString *countryCode;
@property (nonatomic, copy) NSString *type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)countryCode;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocumentScanRequirements:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;

@end
