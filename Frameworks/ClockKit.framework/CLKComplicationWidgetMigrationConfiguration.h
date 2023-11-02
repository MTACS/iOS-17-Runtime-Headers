
@interface CLKComplicationWidgetMigrationConfiguration : NSObject <NSCopying, NSSecureCoding>

+ (bool)supportsSecureCoding;

- (id)_internalCopy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initPrivate;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
