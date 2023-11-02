
@interface __NSPlaceholderFileSecurity : NSFileSecurity <NSCoding, NSCopying>

+ (id)immutablePlaceholder;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileSec:(struct _filesec { }*)arg1;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end
