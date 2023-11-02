
@interface IMSwizzledMethod : NSObject {
    int (* _implementation;
    struct objc_method { } * _method;
    Class  _swizzledClass;
    SEL  _swizzledSelector;
    IMSwizzledMethod * _swizzledWithMethod;
    const char * _typeEncoding;
}

@property (nonatomic, readonly) int (*implementation;
@property (nonatomic, readonly) struct objc_method { }*method;
@property (getter=isSwizzled, nonatomic, readonly) bool swizzled;
@property (nonatomic, readonly) Class swizzledClass;
@property (nonatomic, readonly) SEL swizzledSelector;
@property (nonatomic, retain) IMSwizzledMethod *swizzledWithMethod;
@property (nonatomic, readonly) const char *typeEncoding;

- (void).cxx_destruct;
- (id)description;
- (int (*)implementation;
- (id)initWithClass:(Class)arg1 selector:(SEL)arg2;
- (bool)isSwizzled;
- (struct objc_method { }*)method;
- (void)setSwizzledWithMethod:(id)arg1;
- (bool)swizzleWithMethod:(id)arg1;
- (Class)swizzledClass;
- (SEL)swizzledSelector;
- (id)swizzledWithMethod;
- (const char *)typeEncoding;
- (bool)unswizzle;

@end
