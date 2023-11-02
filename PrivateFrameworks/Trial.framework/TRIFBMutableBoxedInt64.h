
@interface TRIFBMutableBoxedInt64 : TRIFBBoxedInt64 {
    bool  _allowMutation;
    bool  _deleteWhenDone;
    struct BoxedInt64 { long long x1; } * _ptr;
}

@property (nonatomic) long long val;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (const struct BoxedInt64 { long long x1; }*)cppPointer;
- (void)dealloc;
- (id)init;
- (id)initWithVal:(long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setVal:(long long)arg1;
- (long long)val;

@end
