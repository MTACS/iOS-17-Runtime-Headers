
@interface CRKIDSMessageOptions : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _deliveryTimeout;
    bool  _fireAndForget;
}

@property (nonatomic, retain) NSNumber *deliveryTimeout;
@property (getter=shouldFireAndForget, nonatomic) bool fireAndForget;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deliveryTimeout;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setDeliveryTimeout:(id)arg1;
- (void)setFireAndForget:(bool)arg1;
- (bool)shouldFireAndForget;

@end
