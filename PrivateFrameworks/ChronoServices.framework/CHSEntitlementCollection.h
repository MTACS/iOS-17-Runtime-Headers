
@interface CHSEntitlementCollection : NSObject <BSDescriptionProviding, NSCopying, NSSecureCoding> {
    bool  _canKeepAlive;
    bool  _canOpenSystemURLs;
    bool  _usesEventService;
}

@property (nonatomic, readonly) bool canKeepAlive;
@property (nonatomic, readonly) bool canOpenSystemURLs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool usesEventService;

+ (bool)supportsSecureCoding;

- (id)_initFromCollection:(id)arg1;
- (bool)canKeepAlive;
- (bool)canOpenSystemURLs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (bool)usesEventService;

@end
