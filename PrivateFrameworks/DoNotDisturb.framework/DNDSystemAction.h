
@interface DNDSystemAction : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    WFToggleSettingContextualAction * _action;
    bool  _enabled;
    WFReverseContextualAction * _reverseAction;
}

@property (nonatomic, readonly, retain) WFToggleSettingContextualAction *action;
@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, retain) WFReverseContextualAction *reverseAction;

+ (bool)runtimeIsSupported:(id*)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)action;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithAction:(id)arg1 enabled:(bool)arg2;
- (id)initWithAction:(id)arg1 reverseAction:(id)arg2 enabled:(bool)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)reverseAction;

@end
