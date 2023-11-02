
@interface LNQuerySortingOptionMetadata : NSObject <NSCopying, NSSecureCoding> {
    NSString * _entityType;
    NSString * _propertyIdentifier;
}

@property (nonatomic, readonly, copy) NSString *entityType;
@property (nonatomic, readonly, copy) NSString *propertyIdentifier;
@property (nonatomic, readonly, copy) LNStaticDeferredLocalizedString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)entityType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPropertyIdentifier:(id)arg1 entityType:(id)arg2;
- (id)initWithTitle:(id)arg1 propertyIdentifier:(id)arg2 entityType:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)propertyIdentifier;
- (id)title;

@end
