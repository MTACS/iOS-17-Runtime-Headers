
@interface LNAppShortcutActionData : NSObject <NSSecureCoding> {
    LNAction * _action;
    NSDictionary * _identifiersByTypeMap;
}

@property (nonatomic, readonly, copy) LNAction *action;
@property (nonatomic, readonly, copy) NSDictionary *identifiersByTypeMap;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)action;
- (void)encodeWithCoder:(id)arg1;
- (id)identifiersByTypeMap;
- (id)initWithAction:(id)arg1 typeMap:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
