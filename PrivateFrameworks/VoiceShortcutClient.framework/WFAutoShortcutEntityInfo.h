
@interface WFAutoShortcutEntityInfo : NSObject <NSSecureCoding> {
    WFContextualActionIcon * _icon;
    NSString * _name;
    NSString * _subtitle;
}

@property (nonatomic, readonly) WFContextualActionIcon *icon;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *subtitle;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)icon;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 subtitle:(id)arg2 icon:(id)arg3;
- (id)name;
- (id)subtitle;

@end
