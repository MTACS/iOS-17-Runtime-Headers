
@interface SiriPresentationActivationCancelReasonTransport : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _transport;
}

@property (nonatomic, retain) NSNumber *transport;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)cancelReason;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSiriPresentationActivationCancelReason:(unsigned long long)arg1;
- (void)setTransport:(id)arg1;
- (id)transport;

@end
