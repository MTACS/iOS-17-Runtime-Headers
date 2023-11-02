
@interface GTCaptureQueryConfiguration : GTCaptureRequest <NSSecureCoding> {
    unsigned long long  _requestID;
}

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)requestID;

@end
