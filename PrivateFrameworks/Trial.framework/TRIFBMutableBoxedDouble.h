
@interface TRIFBMutableBoxedDouble : TRIFBBoxedDouble {
    bool  _allowMutation;
    bool  _deleteWhenDone;
    struct BoxedDouble { double x1; } * _ptr;
}

@property (nonatomic) double val;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (const struct BoxedDouble { double x1; }*)cppPointer;
- (void)dealloc;
- (id)init;
- (id)initWithVal:(double)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setVal:(double)arg1;
- (double)val;

@end
