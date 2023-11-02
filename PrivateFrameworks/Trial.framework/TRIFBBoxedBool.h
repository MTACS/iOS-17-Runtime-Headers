
@interface TRIFBBoxedBool : NSObject <NSCopying, NSMutableCopying>

@property (nonatomic, readonly) const struct BoxedBool { unsigned char x1; }*cppPointer;
@property (nonatomic, readonly) bool val;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (const struct BoxedBool { unsigned char x1; }*)cppPointer;
- (unsigned long long)hash;
- (id)init;
- (id)initWithVal:(bool)arg1;
- (id)init_;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)val;

@end
