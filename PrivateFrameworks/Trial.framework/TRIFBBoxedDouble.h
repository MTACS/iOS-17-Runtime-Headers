
@interface TRIFBBoxedDouble : NSObject <NSCopying, NSMutableCopying>

@property (nonatomic, readonly) const struct BoxedDouble { double x1; }*cppPointer;
@property (nonatomic, readonly) double val;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (const struct BoxedDouble { double x1; }*)cppPointer;
- (unsigned long long)hash;
- (id)init;
- (id)initWithVal:(double)arg1;
- (id)init_;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (double)val;

@end
