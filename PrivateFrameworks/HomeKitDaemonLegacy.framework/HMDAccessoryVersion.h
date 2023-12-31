
@interface HMDAccessoryVersion : HMFSoftwareVersion <NSCopying, NSSecureCoding> {
    NSString * _rawVersionString;
}

@property (nonatomic, readonly, copy) NSString *rawVersionString;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVersionString:(id)arg1;
- (id)rawVersionString;

@end
