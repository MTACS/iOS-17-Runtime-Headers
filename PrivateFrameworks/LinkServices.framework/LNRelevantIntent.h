
@interface LNRelevantIntent : NSObject <NSCopying, NSSecureCoding> {
    LNAction * _action;
    NSString * _bundleIdentifier;
    LNRelevantContext * _context;
    NSString * _widgetKind;
}

@property (nonatomic, readonly, copy) LNAction *action;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) LNRelevantContext *context;
@property (nonatomic, readonly, copy) NSString *widgetKind;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)action;
- (id)bundleIdentifier;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 action:(id)arg2 widgetKind:(id)arg3 context:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)widgetKind;

@end
