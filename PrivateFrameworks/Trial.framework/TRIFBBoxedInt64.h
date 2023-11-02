
@interface TRIFBBoxedInt64 : NSObject <NSCopying, NSMutableCopying>

@property (nonatomic, readonly) const struct BoxedInt64 { long long x1; }*cppPointer;
@property (nonatomic, readonly) long long val;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (const struct BoxedInt64 { long long x1; }*)cppPointer;
- (unsigned long long)hash;
- (id)init;
- (id)initWithVal:(long long)arg1;
- (id)init_;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)val;

@end
