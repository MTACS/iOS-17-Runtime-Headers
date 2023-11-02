
@interface _UITextInputSessionAccumulator : NSObject <NSCopying> {
    id /* block */  _block;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _depthRange;
    NSString * _name;
    long long  _type;
    unsigned long long  _values;
}

@property (nonatomic, readonly) id /* block */ block;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } depthRange;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) long long type;

+ (id)accumulatorWithName:(id)arg1 type:(long long)arg2 depth:(unsigned long long)arg3 block:(id /* block */)arg4;
+ (id)accumulatorWithName:(id)arg1 type:(long long)arg2 depthRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 block:(id /* block */)arg4;

- (void).cxx_destruct;
- (bool)_increaseWithActions:(id)arg1;
- (void)_increaseWithCount:(unsigned long long)arg1 source:(long long)arg2;
- (id /* block */)block;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })depthRange;
- (id)description;
- (void)enumerateAnalytics:(id /* block */)arg1;
- (void)increaseWithActions:(id)arg1;
- (id)name;
- (void)reset;
- (void)setDepthRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setName:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
