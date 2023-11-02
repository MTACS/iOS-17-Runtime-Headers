
@protocol MTLFunctionLog <NSObject>

@required

- (<MTLFunctionLogDebugLocation> *)debugLocation;
- (NSString *)encoderLabel;
- (<MTLFunction> *)function;
- (unsigned long long)type;

@end
