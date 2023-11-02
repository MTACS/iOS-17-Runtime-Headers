
@interface HMDCameraRecordingH264Profile : HAPNumberParser <NSSecureCoding> {
    long long  _h264Profile;
}

@property (nonatomic, readonly) long long h264Profile;

+ (id)arrayWithProfiles:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)description;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (long long)h264Profile;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithH264Profile:(long long)arg1;
- (id)initWithTLVData:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
