
@protocol CMIInferenceNetworkIOPort <NSObject>

@required

- (unsigned long long)depth;
- (unsigned long long)height;
- (bool)isInput;
- (NSString *)name;
- (unsigned long long)width;

@end
