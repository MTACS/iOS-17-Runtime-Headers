
@interface ProximityAppleIDSetup.PASExtensionManifest : NSObject <NSSecureCoding> {
    void isAccountPickerAvailable;
    void wantsFullScreenPresentation;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
