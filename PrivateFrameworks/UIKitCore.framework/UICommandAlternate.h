
@interface UICommandAlternate : NSObject <NSCopying, NSSecureCoding, _UIMenuLeafAlternate> {
    SEL  _action;
    long long  _modifierFlags;
    id  _sender;
    NSString * _title;
}

@property (nonatomic, readonly) SEL action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long modifierFlags;
@property (nonatomic, readonly) id sender;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;

+ (id)alternateWithTitle:(id)arg1 action:(SEL)arg2 modifierFlags:(long long)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)_leafKeyModifierFlags;
- (id)_resolvedTargetFromFirstTarget:(id)arg1 sender:(id)arg2;
- (SEL)action;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithModifierFlags:(long long)arg1;
- (id)initWithTitle:(id)arg1 action:(SEL)arg2 modifierFlags:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (long long)modifierFlags;
- (id)sender;
- (id)title;

@end
