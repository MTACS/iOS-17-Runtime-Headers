
@interface HMDH264Profile : HAPNumberParser <NSSecureCoding> {
    unsigned long long  _h264Profile;
}

@property (nonatomic, readonly) unsigned long long h264Profile;

+ (id)arrayWithProfiles:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)description;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)h264Profile;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithH264Profile:(unsigned long long)arg1;
- (id)initWithTLVData:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
