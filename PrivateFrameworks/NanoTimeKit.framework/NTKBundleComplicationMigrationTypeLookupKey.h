
@interface NTKBundleComplicationMigrationTypeLookupKey : NSObject <NSCopying, NSSecureCoding> {
    long long  _family;
    unsigned long long  _type;
}

@property (nonatomic, readonly) long long family;
@property (nonatomic, readonly) unsigned long long type;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)family;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithComplicationType:(unsigned long long)arg1 family:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)type;

@end
