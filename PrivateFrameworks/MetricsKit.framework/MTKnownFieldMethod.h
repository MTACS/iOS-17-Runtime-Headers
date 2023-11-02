
@interface MTKnownFieldMethod : NSObject {
    SEL  _accessor;
    int (* _imp;
}

@property (nonatomic) SEL accessor;
@property (nonatomic) int (*imp;

- (SEL)accessor;
- (int (*)imp;
- (id)initWithIMP:(int (*)arg1 accessor:(SEL)arg2;
- (void)setAccessor:(SEL)arg1;
- (void)setImp:(int (*)arg1;

@end
