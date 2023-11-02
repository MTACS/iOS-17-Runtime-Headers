
@interface HMCameraStreamVideoPreferences : NSObject <NSSecureCoding> {
    NSSet * _resolutions;
}

@property (copy) NSSet *resolutions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)resolutions;
- (void)setResolutions:(id)arg1;

@end
