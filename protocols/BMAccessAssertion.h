
@protocol BMAccessAssertion <NSObject>

@required

- (BMAccessDescriptor *)descriptor;
- (NSString *)path;

@end
