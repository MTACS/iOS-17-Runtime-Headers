
@protocol DYCapturableObject <NSObject>

@required

- (NSString *)capturableObjectType;
- (NSString *)displayName;
- (unsigned long long)streamRef;

@end
