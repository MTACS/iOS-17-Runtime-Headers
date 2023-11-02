
@protocol MTLFunctionHandle <NSObject>

@required

- (<MTLDevice> *)device;
- (unsigned long long)functionType;
- (NSString *)name;

@end
