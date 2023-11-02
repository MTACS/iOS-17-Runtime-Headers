
@interface GTCaptureRequest : NSObject <NSSecureCoding> {
    unsigned long long  _requestID;
}

@property (nonatomic, readonly) unsigned long long requestID;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestID:(unsigned long long)arg1;
- (unsigned long long)requestID;

@end
