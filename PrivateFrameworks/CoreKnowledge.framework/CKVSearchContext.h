
@interface CKVSearchContext : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * _context;
}

+ (id)_supportedContextClasses;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contextForType:(unsigned short)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)setContext:(id)arg1 withType:(unsigned short)arg2;

@end
