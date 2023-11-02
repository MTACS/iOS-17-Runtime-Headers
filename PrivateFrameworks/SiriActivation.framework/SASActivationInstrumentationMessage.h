
@interface SASActivationInstrumentationMessage : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _activationEventIdentifier;
    ACTVSchemaACTVClientEvent * _event;
    unsigned long long  _machAbsoluteTime;
}

@property (nonatomic, readonly) NSUUID *activationEventIdentifier;
@property (nonatomic, readonly) ACTVSchemaACTVClientEvent *event;
@property (nonatomic, readonly) unsigned long long machAbsoluteTime;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activationEventIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)event;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEvent:(id)arg1 activationEventIdentifier:(id)arg2 machAbsoluteTime:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned long long)machAbsoluteTime;

@end
