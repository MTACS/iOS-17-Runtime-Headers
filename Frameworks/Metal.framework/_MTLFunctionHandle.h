
@interface _MTLFunctionHandle : NSObject <MTLFunctionHandleSPI> {
    <MTLDevice> * _device;
    unsigned long long  _functionType;
    NSString * _name;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned long long functionType;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *name;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)device;
- (unsigned long long)functionType;
- (id)initWithFunctionType:(unsigned long long)arg1 name:(id)arg2 device:(id)arg3;
- (id)name;

@end
