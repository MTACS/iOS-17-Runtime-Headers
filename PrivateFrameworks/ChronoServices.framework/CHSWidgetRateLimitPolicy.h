
@interface CHSWidgetRateLimitPolicy : NSObject <BSDescriptionStreamable, NSSecureCoding> {
    NSString * _identifier;
    NSSet * _rateLimits;
    NSSet * rateLimits;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) NSSet *rateLimits;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 rateLimits:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)rateLimits;

@end
