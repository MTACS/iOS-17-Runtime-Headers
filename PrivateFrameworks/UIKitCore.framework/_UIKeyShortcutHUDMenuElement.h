
@interface _UIKeyShortcutHUDMenuElement : NSObject <NSSecureCoding> {
    UIMenuElement * _uiMenuElement;
}

@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) UIMenuElement *uiMenuElement;

+ (id)elementWithUIMenuElement:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_acceptMenuVisit:(id /* block */)arg1 shortcutVisit:(id /* block */)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)subtitle;
- (id)title;
- (id)uiMenuElement;

@end
