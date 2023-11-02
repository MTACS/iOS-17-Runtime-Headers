
@interface CAValueFunction : NSObject <NSSecureCoding> {
    void * _impl;
    NSString * _string;
}

@property (readonly) NSString *name;

+ (void)CAMLParserStartElement:(id)arg1;
+ (id)functionWithName:(id)arg1;
+ (bool)supportsSecureCoding;

- (struct Object { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; unsigned int x3 : 8; unsigned int x4 : 24; }*)CA_copyRenderValue;
- (id)_initWithName:(int)arg1;
- (bool)apply:(const double*)arg1 result:(double*)arg2;
- (bool)apply:(const double*)arg1 result:(double*)arg2 parameterFunction:(int (*)arg3 context:(void*)arg4;
- (void)dealloc;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)inputCount;
- (id)name;
- (unsigned long long)outputCount;

@end
