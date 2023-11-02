
@interface HMDCameraRecordingH264Level : HAPNumberParser <NSSecureCoding> {
    long long  _h264Level;
}

@property (nonatomic, readonly) long long h264Level;

+ (id)arrayWithLevels:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)description;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (long long)h264Level;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithH264Level:(long long)arg1;
- (id)initWithTLVData:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
