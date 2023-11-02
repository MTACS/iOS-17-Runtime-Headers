
@interface GTTelemetryRequest : NSObject <NSSecureCoding> {
    unsigned long long  _requestID;
}

@property (nonatomic) unsigned long long requestID;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initNoRequestID;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)requestID;
- (void)setRequestID:(unsigned long long)arg1;

@end
