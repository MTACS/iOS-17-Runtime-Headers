
@interface _CHSSimpleWidgetRefreshStrategy : NSObject <BSDescriptionStreamable, CHSWidgetRefreshStrategy, NSSecureCoding> {
    NSString * _rateLimitIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isDefaultStrategy, nonatomic, readonly) bool isDefaultStrategy;
@property (nonatomic, readonly, copy) NSString *rateLimitIdentifier;
@property (getter=isRateLimited, nonatomic, readonly) bool rateLimited;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithRateLimitIdentifier:(id)arg1;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDefaultStrategy;
- (id)initWithRateLimitIdentifier:(id)arg1;
- (bool)isDefaultStrategy;
- (bool)isEqual:(id)arg1;
- (bool)isRateLimited;
- (id)rateLimitIdentifier;

@end
