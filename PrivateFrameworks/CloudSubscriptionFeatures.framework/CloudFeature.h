
@interface CloudFeature : NSObject <NSSecureCoding> {
    void accessToken;
    void canUse;
    void featureID;
    void limit;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  ttl;
}

@property (nonatomic, readonly) NSString *description;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
