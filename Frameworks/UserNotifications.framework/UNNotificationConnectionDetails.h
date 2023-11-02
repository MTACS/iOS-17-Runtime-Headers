
@interface UNNotificationConnectionDetails : NSObject <NSCopying, NSSecureCoding> {
    BSAuditToken * _auditToken;
    NSString * _bundleIdentifier;
    bool  _internalTool;
}

@property (nonatomic, readonly, copy) BSAuditToken *auditToken;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (getter=isInternalTool, nonatomic, readonly) bool internalTool;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)auditToken;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAuditToken:(id)arg1 bundleIdentifier:(id)arg2 internalTool:(bool)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isInternalTool;

@end
