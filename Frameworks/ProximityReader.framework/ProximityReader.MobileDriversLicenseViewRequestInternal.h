
@interface ProximityReader.MobileDriversLicenseViewRequestInternal : NSObject <NSSecureCoding> {
    void elements;
    void hostPreferredLocaleIdentifier;
    void options;
    void sessionIdentifier;
}

@property (nonatomic, readonly) NSString *description;

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
