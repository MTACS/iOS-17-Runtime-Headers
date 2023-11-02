
@interface UITabBarItemAppearance : NSObject <NSCopying, NSSecureCoding> {
    _UITabBarItemData * _data;
    UITabBarAppearance * _owningAppearance;
    UITabBarItemStateAppearance * _states;
}

@property (setter=_setData:, nonatomic, retain) _UITabBarItemData *_data;
@property (setter=_setOwningAppearance:, nonatomic) UITabBarAppearance *_owningAppearance;
@property (nonatomic, readonly) UITabBarItemStateAppearance *disabled;
@property (nonatomic, readonly) UITabBarItemStateAppearance *focused;
@property (nonatomic, readonly) UITabBarItemStateAppearance *highlighted;
@property (nonatomic, readonly) UITabBarItemStateAppearance *normal;
@property (nonatomic, readonly) UITabBarItemStateAppearance *selected;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_data;
- (void)_describeInto:(id)arg1;
- (id)_initWithTabBarItemData:(id)arg1;
- (id)_owningAppearance;
- (id)_proxyForState:(long long)arg1;
- (void)_setData:(id)arg1;
- (void)_setOwningAppearance:(id)arg1;
- (void)_updateDataTo:(id)arg1;
- (void)_writeToStorage:(id /* block */)arg1;
- (void)configureWithDefaultForStyle:(long long)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)disabled;
- (void)encodeWithCoder:(id)arg1;
- (id)focused;
- (unsigned long long)hash;
- (id)highlighted;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (id)initWithTabBarItemAppearance:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)normal;
- (id)selected;

@end
